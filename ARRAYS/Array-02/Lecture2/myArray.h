#pragma once
#include "Array.h"

template <class T>
class myArray :public Array<T>
{
public:
	void addValue(T);
	T removeValue();
	myArray(int ss);
	bool isEmpty();
	bool isFull();
	void display();
};

template <class T>
bool myArray<T>::isFull()
{
	if (Array<T>::maxSize == Array<T>::currentSize)
		return true;

	return false;
}

template <class T>
bool myArray<T>::isEmpty()
{
	if (Array<T>::currentSize == 0)
		return true;

	return false;
}

template <class T>
void myArray<T>::display()
{
	cout << "Maximum Size: " << Array<T>::maxSize << endl;
	cout << "Current Size: " << Array<T>::currentSize << endl;

	for (int i = 0; i < Array<T>::currentSize; i++)
		cout << i << ". " << Array<T>::arr[i] << endl;
}


template <class T>
myArray<T>::myArray(int ss):Array<T>(ss)
{

}

template <class T>
void myArray<T>::addValue(T value)
{
	if (!isFull())
	{
		Array<T>::arr[Array<T>::currentSize] = value;
		Array<T>::currentSize++;
	}

	else
		cout << "Array is already FULL" << endl;
}


template <class T>
T myArray<T>::removeValue()
{
	if (isEmpty())
	{
		cout << "Array is Empty, returning ZERO" << endl;
		return 0;
	}

	Array<T>::currentSize--;
	return Array<T>::arr[Array<T>::currentSize];
}