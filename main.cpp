#include<iostream>
#include"Line.h"
#include"Station.h"
#include"NanJing_Subway.h"
#include"Line_init.h"

using namespace std;

int main()
{
	//硬编码初始化，考虑到南京地铁站点数有限，且避免在不同平台编译乱码现象，此处采用硬编码
	//初始线路
	Line one("1号线",32,"1");
	Line two("2号线", 30,"2");
	Line three("3号线", 29,"3");
	Line four("4号线", 18,"4");
	Line five("5号线", 30,"5");
	Line seven("7号线", 27,"7");
	Line ten("10号线", 14,"10");

	Line S_one("S1号线", 9,"S1");
	Line S_three("S3号线", 18,"S3");
	Line S_six("S6号线", 13,"S6");
	Line S_seven("S7号线", 9,"S7");
	Line S_eight("S8号线", 19,"S8");
	Line S_nine("S9号线", 6,"S9");

	//初始线路的站点
	one_init(one, 32);
	two_init(two, 30);
	three_init(three, 29);
	four_init(four, 18);
	five_init(five, 30);
	seven_init(seven, 27);
	ten_init(ten, 14);

	S_one_init(S_one, 9);
	S_three_init(S_three, 18);
	S_six_init(S_six, 13);
	S_seven_init(S_seven, 9);
	S_eight_init(S_eight, 19);
	S_nine_init(S_nine, 6);
	
	Line lines[13] = { one,two,three,four,five,seven,ten,S_one,S_three,S_six,S_seven,S_eight,S_nine };

	system_m NanJing("南京地铁",lines, 13);

	NanJing.__welcome__();
	NanJing.__search__();

	/*for (int i = 0; i < NanJing.station_count; i++) {
		cout << NanJing.station_index[i].belong_line_id << "\t" << NanJing.station_index[i].station_name << endl;
	}*/

	//判断权值
	/*string station_1;
	string station_2;
	cout << "判断权值" << endl;
	cin >> station_1 >> station_2;
	int i = NanJing.station_to_index(station_1);
	int j = NanJing.station_to_index(station_2);
	cout << station_1 << "与" << station_2 << ": " << "NanJing.Graph_short" << NanJing.Graph_short[i][j] <<"\\"<< NanJing.Graph_short[j][i] << endl;
	cout << station_1 << "与" << station_2 << ": " << "NanJing.Graph_less" << NanJing.Graph_less[i][j] <<"\\"<< NanJing.Graph_less[j][i]<<endl;*/


	return 0;
}