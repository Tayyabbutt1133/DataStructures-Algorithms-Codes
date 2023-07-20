#pragma once
#include <iostream>
using namespace std;

template <class T>
class Array
{
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	virtual void addValue(T) = 0;
	virtual T removeValue() = 0;
	virtual bool isFull() = 0;
	virtual bool isEmpty() = 0;
	Array(int);
};

template <class T>
Array<T>::Array(int s)
{
	arr = new T[s];
	maxSize = s;
	currentSize = 0;
}