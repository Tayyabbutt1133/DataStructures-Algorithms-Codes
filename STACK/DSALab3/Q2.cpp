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

class MyStack : public Stack {
public:
	MyStack(int s) : Stack(s) {}
	void push(int x) {
		if (top == size - 1) {
			cout << "Stack Overflow!" << endl;
			return;
		}
		arr[++top] = x;
	}
	int pop() {
		if (top == -1) {
			cout << "Stack Underflow!" << endl;
			return -1;
		}
		return arr[top--];
	}
	bool isEmpty() {
		return top == -1;
	}
	bool isFull() {
		return top == size - 1;
	}
};

int main() {
	int size;
	cout << "Enter the size of the stack: ";
	cin >> size;

	MyStack stack(size);

	if (stack.isEmpty()) {
		cout << "Stack is empty. Please enter numbers to fill the stack:" << endl;
	}

	int num;
	do {
		if (stack.isEmpty() || !stack.isFull()) {
			cout << "Enter a number: ";
			cin >> num;
			stack.push(num);
		}
		else {
			break;
		}
	} while (true);

	if (stack.isFull()) {
		cout << "Stack is full!" << endl;
		cout << "Would you like to remove elements from the stack? (Y/N): ";
		char choice;
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			do {
				cout << "Popped element: " << stack.pop() << endl;
				if (stack.isEmpty()) {
					cout << "Stack is empty!" << endl;
					break;
				}
				cout << "Would you like to remove another element? (Y/N): ";
				cin >> choice;
			} while (choice == 'Y' || choice == 'y');
		}
	}

	return 0;
}
