#include"NanJing_Subway.h"

system_m::system_m(string sysname, Line* lines, int linecount)
{
	system_name = sysname;
	sys_lines = lines;
	line_count = linecount;
	station_count = 255;

	//初始化索引
	station_index = new Station[station_count];
	int k = 0;
	for (int i = 0; i < linecount; i++) {
		for (int j = 0; j < sys_lines[i].station_count; j++) {
			station_index[k++] = sys_lines[i].stations[j];
		}
	}

	//邻接矩阵分配空间
	Graph_less = new int* [station_count];
	for (int i = 0; i < station_count; i++) {
		Graph_less[i] = new int[station_count];
	}
	Graph_short = new int* [station_count];
	for (int i = 0; i < station_count; i++) {
		Graph_short[i] = new int[station_count];
	}

	//初始化权值
	for (int i = 0; i < station_count; i++) {
		for (int j = 0; j < station_count; j++) {
			Graph_less[i][j] = 100000000;
			Graph_short[i][j] = 100000000;
		}
	}

	//站到站为0
	for (int i = 0; i < station_count; i++) {
		Graph_less[i][i] = 0;
		Graph_short[i][i] = 0;
	}

	

	//一条线路上面的站，相连通的站
	for (int k = 1; k < station_count; k++) {
		int i = station_to_index(station_index[k].belong_line_id);
		int j = station_to_index(station_index[k - 1].belong_line_id);
		if (station_index[i].belong_line == station_index[j].belong_line) {
			Graph_short[i][j] = 1;
			Graph_short[j][i] = 1;
			Graph_less[i][j] = 1;
			Graph_less[j][i] = 1;
		}
	}



	//初始化换站数组,采用id编号
	//1号线
	T[0] = { 100104 ,100706 };
	T[1] = { 100107 ,100309 };
	T[2] = { 100110 ,100403 };
	T[3] = { 100112 ,100214 };
	T[4] = { 100114 ,100517 };

	T[5] = { 100116 ,101000 };
	T[6] = { 100120 ,100321 };
	T[7] = { 100120, 110108 };
	T[8] = { 100120, 110300 };
	T[9] = { 100126 ,100505 };

	//2号线
	T[10] = { 100203 ,100725 };
	T[11] = { 100204 ,110305 };
	T[12] = { 100206 ,101003 };
	T[13] = { 100211 ,100715 };
	T[14] = { 100213 ,100519 };

	T[15] = { 100214 ,100112 };
	T[16] = { 100215 ,100313 };
	T[17] = { 100222 ,110600 };
	T[18] = { 100223 ,100411 };

	//3号线
	T[19] = { 100303 ,110803 };
	T[20] = { 100307 ,100708 };
	T[21] = { 100309 ,100107 };
	T[22] = { 100311 ,100404 };
	T[23] = { 100313 ,100215 };

	T[24] = { 100315 ,100516 };
	T[25] = { 100321 ,100120 };
	T[26] = { 100321 ,110108 };
	T[27] = { 100321 ,110300 };
	T[28] = { 100326 ,100502 };

	//4号线
	T[29] = { 100401 ,100713 };
	T[30] = { 100402 ,100521 };
	T[31] = { 100403 ,100110 };
	T[32] = { 100404 ,100311 };
	T[33] = { 100411 ,100223 };

	//5号线
	T[34] = { 100500 ,110105 };
	T[35] = { 100502 ,100326 };
	T[36] = { 100505 ,100126 };
	T[37] = { 100516 ,100315 };
	T[38] = { 100517 ,100114 };
	T[39] = { 100519 ,100213 };

	T[40] = { 100521 ,100402 };
	T[41] = { 100524 ,100711 };

	//7号线
	T[42] = { 100706 ,100104 };
	T[43] = { 100708 ,100307 };
	T[44] = { 100711 ,100524 };

	T[45] = { 100713 ,100401 };
	T[46] = { 100715 ,100211 };
	T[47] = { 100721 ,101002 };
	T[48] = { 100723 ,110306 };
	T[49] = { 100725 ,100203 };

	//10号线
	T[50] = { 101000 ,100116 };
	T[51] = { 101002 ,100721 };
	T[52] = { 101003 ,100206 };

	//S1号线
	T[53] = { 110100 ,110700 };
	T[54] = { 110102 ,110900 };
	T[55] = { 110105 ,100500 };
	T[56] = { 110108 ,100321 };
	T[57] = { 110108 ,100120 };
	T[58] = { 110108 ,110300 };

	//S3号线
	T[59] = { 110300 ,100120 };
	T[60] = { 110300 ,100321 };
	T[61] = { 110300 ,110108 };
	T[62] = { 110305 ,100204 };
	T[63] = { 110306 ,100723 };

	//S6号线
	T[64] = { 110600 ,100222 };

	//S7号线
	T[65] = { 110700 ,110100 };

	//S8号线
	T[66] = { 110803 ,100303 };

	//S9号线
	T[67] = { 110900 ,110102 };

	for (int k = 0; k < tansfer_station_count; k++) {
		int i = station_to_index(T[k].id_1);
		int j = station_to_index(T[k].id_2);
		Graph_short[i][j] = 1;	//最少站点数
		Graph_less[i][j] = 100;	//采用权值惩罚策略
	}
}


int system_m::station_to_index(string name)
{
	for (int i = 0; i < station_count; i++) {
		if (station_index[i].station_name == name) {
			return i;
		}
	}
	cout << "此站点未开通！！" << endl;
	return -1;
}

int system_m::station_to_index(int id)
{
	for (int i = 0; i < station_count; i++) {
		if (station_index[i].belong_line_id == id) {
			return i;
		}
	}
	cout << "此站点未开通！！" << endl;
	return -1;
}

void system_m::__welcome__()
{
	cout << "欢迎使用由计科241 吴文滨同学研发南京地铁换乘系统（1.0.0）" << endl;
	cout << "========================================================" << endl;
	cout << "欢迎乘坐南京地铁！！！" << endl;
	cout << "已开通如下线路：" << endl;
	for (int i = 0; i < line_count; i++) {
		cout << sys_lines[i].line_name << "\t";
	}
	cout << endl;
	cout << "======================================================================================================" << endl;
	cout<< "======================================================================================================" << endl;
	cout << "（考虑到不同线路同一站点，但是换乘所需的时间，本方案将不同线路的同意站点设置为不同结点，并在输出结果中采用不同方法表示出来)" << endl;
	cout << " (出现 -> 1 南京站 -> 3 南京站 表示在南京站换乘)" << endl;
	cout << "======================================================================================================" << endl;
	cout << endl;
	cout << "查询所有站点，请输入0，" << endl;
	cout << "查询指定线路，请输入线路编号（如1号线，输入1；S1号线，输入S1）,"<<endl;
	cout << "不需要查询，请输入N，" << endl;
	cout << "请输入：";
	string search_information;
	cin >> search_information;

	//全部转换为大写
	for (char& c : search_information) c = toupper(c);

	if (search_information == "N") return;
	if (search_information == "0") {
		for (int i = 0; i < line_count; i++) {
			cout << sys_lines[i].line_name << ":"<<endl;
			cout << "id" <<"\t" << "name" << endl;
			for (int j = 0; j < sys_lines[i].station_count; j++) {
				cout << sys_lines[i].stations[j].belong_line_id <<"\t"<< sys_lines[i].stations[j].station_name << endl;
			}
			cout << endl;
		}
		
	}
	else {
		int information_brief = -1;
		for (int i = 0; i < line_count; i++) {
			if (sys_lines[i].brief_name == search_information) {
				information_brief = i;
				break;
			}
		}
		if (information_brief != -1) {
			cout << sys_lines[information_brief].line_name << endl;
			cout << "id" << "\t" << "name" << endl;
			for (int i = 0; i < sys_lines[information_brief].station_count; i++) {
				cout << sys_lines[information_brief].stations[i].belong_line_id << "\t" << sys_lines[information_brief].stations[i].station_name << endl;
			}
			cout << endl;
		}
		else {
			cout << "输入错误！！！" << endl;
		}
		
	}
}

void system_m::__search__()
{
	string start_name;
	string end_name;
	cout << endl;
	
	cout << "======================================================================================================" << endl;

	cout << "请输入起点和终点，" << endl;
	cout << "起点：";
	cin >> start_name;
	cout << "终点：";
	cin >> end_name;
	cout << endl;
	cout << "======================================================================================================" << endl;

	cout << "最少站点数线路：" << endl;
	__search_short__(start_name,end_name);
	cout << endl;

	cout << "最少换乘站线路：" << endl;
	__search_less__(start_name, end_name);		//最少换乘站
}

//最少站点数线路
Array system_m::__search_short__(string start_name, string end_name)
{
	int start_index = station_to_index(start_name);
	int end_index = station_to_index(end_name);

	if (start_index == -1 || end_index == -1||(start_index == end_index)) {
		Array p;
		p.push_back(-1);
		return p;
	}

	//记录前驱结点，用于重建路径
	int prev[255];
	//记录是否被访问
	bool visited[255];

	//初始化
	for (int i = 0; i < 255; i++) {
		prev[i] = -1;
		visited[i] = false;
	}


	Queue q;

	//初始化起点
	q.push(start_index);
	visited[start_index] = true;
	prev[start_index] = start_index;

	bool found = false;

	//BFS遍历
	while (!q.empty() && !found) {
		int current = q.front();
		q.pop();

		//遍历所有邻接结点
		for (int neighbor = 0; neighbor < station_count; neighbor++) {
			//如果相邻且未访问
			if (Graph_short[current][neighbor] == 1 && !visited[neighbor]) {
				visited[neighbor] = true;
				prev[neighbor] = current;
				q.push(neighbor);

				if (station_index[neighbor].station_name == station_index[end_index].station_name) {
					end_index = neighbor;		//为了下一步重建路径
					found = true;
					break;
				}
			}
		}
	}

	//重建路径
	Array path;
	if (prev[end_index] != -1) {
		int node = end_index;
		while (node != start_index) {
			path.push_back(node);
			node = prev[node];
		}
		path.push_back(start_index);
		path.transfer();
	}

	

	//不改变超节点结构，在外部输出上优化修改
	for (int i = 0; i < path.size(); i++) {
		if (i == 0 && station_index[path.array[0]].station_name == station_index[path.array[1]].station_name) {
			continue;
		}
		cout << "-> "<<station_index[path.array[i]].brief_line << " " << station_index[path.array[i]].station_name << endl;
		//station_index[path.array[i]].draw_station();
		
	}


	return path;
	
}

//最少换乘站线路
Array system_m::__search_less__(string start_name, string end_name)
{
	int start_index = station_to_index(start_name);
	int end_index = station_to_index(end_name);

	if (start_index == -1 || end_index == -1 || (start_index == end_index)) {
		Array p;
		p.push_back(-1);
		return p;
	}

	Array start_indices;
	Array end_indices;

	for (int i = 0; i < 255; i++) {
		if (station_index[i].station_name == station_index[start_index].station_name) {
			start_indices.push_back(i);
		}
		if (station_index[i].station_name == station_index[end_index].station_name) {
			end_indices.push_back(i);
		}
	}

	if (start_indices.empty() || end_indices.empty()) {
		Array p;
		p.push_back(-1);
		return p;
	}

	Array best_path;
	int min_weight = 100000000;


	//对每个起点——终点组合运行迪杰斯特拉
	for (int ii = 0;ii< start_indices.length();ii++) {
		for (int jj = 0;jj< end_indices.length();jj++) {
			pair<Array,int> result = __dijketra_less__(start_indices.array[ii], end_indices.array[jj]);
			const auto& path = result.first;
			int weight = result.second;
			

			if (!path.empty() && weight < min_weight) {
				min_weight = weight;
				best_path = path;
			}
		}
	}

	//输出结果
	if (!best_path.empty()) {
		for (int i = 0; i < best_path.size(); i++) {
			int idx = best_path.array[i];
			cout <<"->" << station_index[idx].brief_line << " " << station_index[idx].station_name << endl;
			station_index[idx].draw_station();
		}
	}

	return best_path;
}


//单独的dijkstra算法
pair<Array, int> system_m:: __dijketra_less__(int start_index, int end_index)
{
	int prev[255];
	bool visited[255];
	int dist[255];

	//初始化
	for (int i = 0; i < 255; i++) {
		prev[i] = -1;
		visited[i] = false;
		dist[i] = 100000000;
	}

	dist[start_index] = 0;
	prev[start_index] = start_index;

	//Dijsktra主循环
	for (int count = 0; count < 255; count++) {
		//找到未访问的最小结点
		int u = -1;
		int min_dist = 100000000;
		for (int i = 0; i < 255; i++) {
			if (!visited[i] && dist[i] < min_dist) {
				min_dist = dist[i];
				u = i;
			}
		}

		if (u == -1 || u == end_index) {
			break;
		}

		visited[u] = true;

		//更新
		for (int v = 0; v < 255; v++) {
			if (!visited[v] && Graph_less[u][v]!= 100000000) {
				int new_dist = dist[u] + Graph_less[u][v];
				if (new_dist < dist[v]) {
					dist[v] = new_dist;
					prev[v] = u;
				}
			}
		}
	}

	//重建路径
	Array path;

	if (prev[end_index] != -1 && dist[end_index] != 100000000) {
		int node = end_index;
		while (node != start_index) {
			path.push_back(node);
			node = prev[node];
		}
		path.push_back(start_index);
		path.transfer();
	}

	
	return { path,dist[end_index] };
}


node system_m::find_i_j(Station station)
{
	node ij;
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < sys_lines[i].station_count; j++) {
			if (sys_lines[i].stations[j].station_name == station.station_name) {
				ij.i = i;
				ij.j = j;
				return ij;
			}
		}
	}
}