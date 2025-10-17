#include"Station.h"

void Station::print()
{
	cout << station_name << endl;
}

void Station::setStation(string name, string line_name, int belong_id, bool is, string brief) {
	station_name = name;
	belong_line = line_name;
	belong_line_id = belong_id;
	traver = is;
	brief_line = brief;
}

void Station::setStationxy(int xx, int yy,COLORREF color)
{
	x = xx;
	y = yy;
	station_color = color;
}

void Station::draw_station()
{

	setfillcolor(BLACK);
	setlinecolor(BLACK);
	fillcircle(x, y, 3);

	if (traver) {
		setfillcolor(BLACK);
		setlinecolor(BLACK);
		fillcircle(x, y, 2);
	}
	else {
		setfillcolor(station_color);
		setlinecolor(station_color);
		fillcircle(x, y, 2);
	}
	

	settextcolor(BLACK); // 文字颜色
	settextstyle(10, 0, _T("黑体"));
	setbkmode(TRANSPARENT);
	char name_name[50];
	strcpy_s(name_name, station_name.c_str());
	outtextxy(x+5, y-2, _T(name_name));
	
}

void Station::draw_station_brief()
{
	setfillcolor(BLACK);
	setlinecolor(BLACK);
	fillcircle(x, y, 3);

	if (traver) {
		setfillcolor(BLACK);
		setlinecolor(BLACK);
		fillcircle(x, y, 2);
	}
	else {
		setfillcolor(station_color);
		setlinecolor(station_color);
		fillcircle(x, y, 2);
	}
}

void Station::draw_station_brief_little()
{
	setfillcolor(BLACK);
	setlinecolor(BLACK);
	fillcircle(x, y, 2);

	if (traver) {
		setfillcolor(BLACK);
		setlinecolor(BLACK);
		fillcircle(x, y, 1);
	}
	else {
		setfillcolor(station_color);
		setlinecolor(station_color);
		fillcircle(x, y, 1);
	}
}

void Station::draw_station_big()
{ 
	setfillcolor(BLACK);
	setlinecolor(BLACK);
	fillcircle(x, y, 6);

	if (traver) {
		setfillcolor(BLACK);
		setlinecolor(BLACK);
		fillcircle(x, y, 5);
	}
	else {
		setfillcolor(station_color);
		setlinecolor(station_color);
		fillcircle(x, y, 5);
	}


	settextcolor(BLACK); // 文字颜色
	settextstyle(15, 0, _T("黑体"));
	setbkmode(TRANSPARENT);
	char name_name[50];
	strcpy_s(name_name, station_name.c_str());
	outtextxy(x + 5, y - 2, _T(name_name));
}