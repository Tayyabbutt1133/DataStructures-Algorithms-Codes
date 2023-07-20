#pragma once
#include <iostream>
using namespace std;

class Array
{
protected:
	int* arr;
	int maxSize;
	int currentSize;
public:
	virtual void addValue(int) = 0;
	virtual int removeValue() = 0;
	Array(int);
};

Array::Array(int s)
{
	arr = new int[s];
	maxSize = s;
	currentSize = 0;
}