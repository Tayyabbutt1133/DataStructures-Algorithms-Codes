#pragma once
#include <iostream>
#define max 5
using namespace std;

class Queue {
	int A[max];
	int rear; // changed to rear
	int front; //newly added to show first index of queue
public:
	Queue() { rear = -1; front = -1; } // updated
	bool isEmpty();
	bool isFull();
	void Enqueue(int);
	void Dequeue();
	void Front();
	void Rear();
};

bool Queue::isEmpty() {
	if (front == -1 && rear==-1) { //updated
		return true;
	}
	else { return false; }
}

bool Queue::isFull() {
	if (rear >= max - 1) {
		return true;
	}
	else { return false; }
}

void Queue::Enqueue(int num) {
	if (!isFull()) {
		A[++rear] = num;
		cout << A[rear] << " is inserted to index " << rear << endl;
		if (front == -1) {
			front++;
		}
	}
	else {
		cout << "Queue is Full" << endl;}
}

void Queue::Dequeue() {
	if (!isEmpty()) {
		cout << A[front] << " is extracted from index " << front << endl;
		if (rear >= max - 1 && front >= max - 1) {
			front = -1;
			rear = -1;
		}
		else {
			front++;
		}
	}
	else { cout << "Queue is Empty" << endl;}
}
void Queue::Front() {
	if (!isEmpty()) {
		cout << A[0] << " is the first element of Queue"<<endl;

	}
	else {
		cout << "Queue is Empty" << endl;
	}
}