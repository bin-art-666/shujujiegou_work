#include"Queue.h"

using namespace std;

Queue::Queue()
{
	queue = new int[1000];
	first = 0;
	rear = 0;
}

void Queue::push(int n)
{
	queue[rear] = n;
	rear++;
}

int Queue :: front()
{
	return queue[first];
	first++;
}

void Queue::pop()
{
	first++;
}

bool Queue::empty()const
{
	if (rear == first) {
		return true;
	}
	else {
		return false;
	}
}
