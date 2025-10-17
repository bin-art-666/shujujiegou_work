#pragma once
#include<iostream>
#include<string>
#include"Station.h"
#include<easyx.h>


using namespace std;

//���������·��
class Line
{
public:
	string line_name;				//��·����
	int station_count;				//��·��վ����
	Station* stations = nullptr;	//����վ������̬����洢�ռ�
	string brief_name;				//�������
	COLORREF line_color;

public:
	Line() : line_name(""),brief_name(""), station_count(0), stations(nullptr),line_color(WHITE){} // ���Ĭ�Ϲ��캯��
	Line(string name, int count,string bname,COLORREF color) :line_name(name), station_count(count),brief_name(bname),line_color(color) {
		stations = new Station[count];
	};
	void __Print_all__();
	void drawLine();
	void drawLineBrief();
	void drawLineBriefLittle();



	void drawLineBrief(int x);
	
};