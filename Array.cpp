#include"Array.h"

using namespace std;

Array::Array()
{
	array = new int[400];
	length_all = 0;
	tag = 0;
}

void Array::push_back(int n)
{
	array[tag] = n;
	tag++;
	length_all++;
}

int Array::begin()
{
	return 0;
}

int Array::end()
{
	return tag;
}

int Array::length()
{
	return length_all;
}

void Array::transfer()
{
	for (int i = 0; i < length_all / 2; i++) {
		int temp = array[i];
		array[i] = array[length_all - 1 - i];
		array[length_all - 1 - i] = temp;
	}
}

bool Array::empty() const
{
	if (length_all == 0) {
		return true;
	}
	else {
		return false;
	}
}

int Array::size()
{
	return length_all;
}