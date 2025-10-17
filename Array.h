#pragma once

#include<iostream>

using namespace std;

class Array
{
public:
	int *array;
	int length_all;
	int tag;
	
public:
	Array();
	void push_back(int n);
	int begin();
	int end();
	int length();
	void transfer();
	bool empty() const;
	int size();
};