#include"Line.h"
#include<iostream>

using namespace std;

void Line::__Print_all__()
{
	cout << line_name <<":" << endl;
	for (int index = 0; index < station_count; index++)
	{
		if (index == 0) {
			cout << "  " << stations[index].station_name;
			if (stations[index].traver == true) {
				cout << " " << "(»»³ËÕ¾)";
			}
			cout << endl;
		}
		else {
			cout << " -> " << stations[index].station_name;
			if (stations[index].traver == true) {
				cout << " " << "(»»³ËÕ¾)";
			}
			cout << endl;
		}
	}
}

void Line::drawLine()
{
	for (int i = 0; i < station_count - 1; i++) {
		setlinecolor(line_color);
		setlinestyle(PS_SOLID, 4);
		line(stations[i].x, stations[i].y, stations[i + 1].x, stations[i + 1].y);
	}

	for (int i = 0; i < station_count; i++) {
		stations[i].draw_station();
	}
}

void Line::drawLineBrief(int x)
{
	stations[x].draw_station();
}

void Line::drawLineBrief()
{
	for (int i = 0; i < station_count - 1; i++) {
		setlinecolor(line_color);
		setlinestyle(PS_SOLID, 4);
		line(stations[i].x, stations[i].y, stations[i + 1].x, stations[i + 1].y);
	}

	for (int i = 0; i < station_count; i++) {
		stations[i].draw_station_brief();
	}
}

void Line::drawLineBriefLittle()
{
	for (int i = 0; i < station_count - 1; i++) {
		setlinecolor(line_color);
		setlinestyle(PS_SOLID, 2);
		line(stations[i].x, stations[i].y, stations[i + 1].x, stations[i + 1].y);
	}

	for (int i = 0; i < station_count; i++) {
		stations[i].draw_station_brief_little();
	}
}