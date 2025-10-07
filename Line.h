#pragma once
#include<iostream>
#include<string>
#include"Station.h"

using namespace std;

//���������·��
class Line
{
public:
	string line_name;				//��·����
	int station_count;				//��·��վ����
	Station* stations = nullptr;	//����վ������̬����洢�ռ�
	string brief_name;				//�������

public:
	Line() : line_name(""),brief_name(""), station_count(0), stations(nullptr) {} // ���Ĭ�Ϲ��캯��
	Line(string name, int count,string bname) :line_name(name), station_count(count),brief_name(bname) {
		stations = new Station[count];
	};
	void __Print_all__();

};