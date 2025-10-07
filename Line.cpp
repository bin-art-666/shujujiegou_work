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