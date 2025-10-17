#pragma once
#include<iostream>
#include<string>
#include"Station.h"
#include<easyx.h>


using namespace std;

//定义地铁线路类
class Line
{
public:
	string line_name;				//线路名称
	int station_count;				//线路的站点数
	Station* stations = nullptr;	//根据站点数动态分配存储空间
	string brief_name;				//简洁名字
	COLORREF line_color;

public:
	Line() : line_name(""),brief_name(""), station_count(0), stations(nullptr),line_color(WHITE){} // 添加默认构造函数
	Line(string name, int count,string bname,COLORREF color) :line_name(name), station_count(count),brief_name(bname),line_color(color) {
		stations = new Station[count];
	};
	void __Print_all__();
	void drawLine();
	void drawLineBrief();
	void drawLineBriefLittle();



	void drawLineBrief(int x);
	
};