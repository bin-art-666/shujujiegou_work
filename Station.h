#pragma once
#include<iostream>
#include<string>

using namespace std;

class Station
{
public:
	string station_name;		//定义地铁站的站名
	string belong_line;			//所属路线的名称
	int belong_line_id;			//所属路线的id  and  站点id
	bool traver;				//是否是换乘站
	string brief_line;

public:
	Station() :station_name(""), belong_line(""), belong_line_id(0), traver(false), brief_line("") {};
	~Station() {};
	void print();

	// setter 方法
	void setStation(string name, string line_name, int belong_id, bool is,string brief);
};