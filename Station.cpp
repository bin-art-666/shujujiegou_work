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