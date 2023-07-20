#include <iostream>
using namespace std;

class Stack {
protected:
	int* arr;
	int size;
	int top;
public:
	Stack(int s) {
		size = s;
		arr = new int[size];
		top = -1;
	}
	virtual void push(int x) = 0;
	virtual int pop() = 0;
	virtual ~Stack() {
		delete[] arr;
	}
};