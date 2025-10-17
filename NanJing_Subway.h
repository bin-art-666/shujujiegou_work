#pragma once
#include<iostream>
#include<string>
#include"Station.h"
#include"Line.h"
#include"Queue.h"
#include<algorithm>
#include"Array.h"

using namespace std;

struct tansfer
{
	int id_1;
	int id_2;
};

struct node
{
	int i;
	int j;
};

class system_m
{
public:
	string system_name;
	Line* sys_lines;
	int line_count;
	int station_count = 255;
	Station *station_index;

	tansfer T[68];
	int tansfer_station_count = 68;
	int** Graph_short;		//用于搜索最少站点
	int** Graph_less;		//用于换乘站数最少

	system_m(string sysname, Line* lines, int linecount);


	int station_to_index(string name);
	int station_to_index(int id);	

	void __welcome__();
	void __search__();

	//查找算法
	//最少站点数
	Array __search_short__(string start_name,string end_name);
	//最少换乘站
	Array __search_less__(string start_name,string end_name);
	
	pair<Array, int> __dijketra_less__(int start_index, int end_i);

	node find_i_j(Station station);
};