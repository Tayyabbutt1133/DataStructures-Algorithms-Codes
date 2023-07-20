#pragma once
#include "Array.h"

class myArray :public Array
{
public:
	void addValue(int);
	int removeValue();
	myArray(int ss);
};

myArray::myArray(int ss):Array(ss)
{

}

void myArray::addValue(int)
{
	cout << "addValue(int)" << endl;
}

int myArray::removeValue()
{
	cout << "removeValue()" << endl;
	return 0;
}