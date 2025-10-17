#pragma once
#include<iostream>

using namespace std;

class Queue
{
public:
	int* queue;
	int first;
	int rear;

public:
	Queue();
	void push(int n);
	int front();
	void pop();
	bool empty()const;
};