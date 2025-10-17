#pragma once
#include<iostream>
#include<easyx.h>
#include<string>
#include<cstring>

using namespace std;

class lineButton
{
public:
	int B_x1, B_y1, B_x2, B_y2;
	int round_r;
	COLORREF B_Color;
	string B_name;

	lineButton(int x1, int y1, int x2, int y2, int r, COLORREF color, string name) :B_x1(x1), B_y1(y1), B_x2(x2), B_y2(y2), round_r(r), B_Color(color), B_name(name) {};
	void buttonDraw();
	//void to_draw_line();
};