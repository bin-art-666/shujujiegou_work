#pragma once
#include<iostream>
#include<string>
#include<easyx.h>
#include<cstring>

using namespace std;

class Station
{
public:
	string station_name;		//�������վ��վ��
	string belong_line;			//����·�ߵ�����
	int belong_line_id;			//����·�ߵ�id  and  վ��id
	bool traver;				//�Ƿ��ǻ���վ
	string brief_line;

	int x, y;
	COLORREF station_color;

public:
	Station() :station_name(""), belong_line(""), belong_line_id(0), traver(false), brief_line("") {};
	~Station() {};
	void print();

	// setter ����
	void setStation(string name, string line_name, int belong_id, bool is,string brief);
	void setStationxy(int x, int y,COLORREF color);

	void draw_station();
	void draw_station_brief();
	void draw_station_brief_little();
	void draw_station_big();

};