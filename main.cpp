#include<iostream>
#include"Line.h"
#include"Station.h"
#include"NanJing_Subway.h"
#include"Line_init.h"

using namespace std;

int main()
{
	//Ӳ�����ʼ�������ǵ��Ͼ�����վ�������ޣ��ұ����ڲ�ͬƽ̨�����������󣬴˴�����Ӳ����
	//��ʼ��·
	Line one("1����",32,"1");
	Line two("2����", 30,"2");
	Line three("3����", 29,"3");
	Line four("4����", 18,"4");
	Line five("5����", 30,"5");
	Line seven("7����", 27,"7");
	Line ten("10����", 14,"10");

	Line S_one("S1����", 9,"S1");
	Line S_three("S3����", 18,"S3");
	Line S_six("S6����", 13,"S6");
	Line S_seven("S7����", 9,"S7");
	Line S_eight("S8����", 19,"S8");
	Line S_nine("S9����", 6,"S9");

	//��ʼ��·��վ��
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

	system_m NanJing("�Ͼ�����",lines, 13);

	NanJing.__welcome__();
	NanJing.__search__();

	/*for (int i = 0; i < NanJing.station_count; i++) {
		cout << NanJing.station_index[i].belong_line_id << "\t" << NanJing.station_index[i].station_name << endl;
	}*/

	//�ж�Ȩֵ
	/*string station_1;
	string station_2;
	cout << "�ж�Ȩֵ" << endl;
	cin >> station_1 >> station_2;
	int i = NanJing.station_to_index(station_1);
	int j = NanJing.station_to_index(station_2);
	cout << station_1 << "��" << station_2 << ": " << "NanJing.Graph_short" << NanJing.Graph_short[i][j] <<"\\"<< NanJing.Graph_short[j][i] << endl;
	cout << station_1 << "��" << station_2 << ": " << "NanJing.Graph_less" << NanJing.Graph_less[i][j] <<"\\"<< NanJing.Graph_less[j][i]<<endl;*/


	return 0;
}