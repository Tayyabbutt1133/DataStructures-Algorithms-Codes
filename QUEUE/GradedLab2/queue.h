#pragma once

#include<iostream>
using namespace std;

#define n 100
class queue
{
private:
	int front;
	int rear;
	char*arr;
public:
	queue()
	{
		arr = new char[n];
		front = -1;
		rear = -1;
	}
	void enque(char x)
	{
		if (rear == n - 1) //checking whether the queue is full 
		{
			cout << "Queue is Full" << endl;
		}
		//else
		rear++;
		arr[rear] = x;
		if (front == -1)
		{
			front++;
		}
	}
	void deque()
	{
		if (front == -1 || front>rear)
		{
			cout << "No elements present in Queue" << endl;
			return;
		}
		front++;
	}
	char peek()
	{
		if (front == -1 || front>rear)
		{
			cout << "No elements present in Queue" << endl;
			return front;
		}
		return arr[front];
	}
	bool isempty()
	{
		if (front == -1 || front>rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
