#include <iostream>
using namespace std;

//We are basically constantly giving size by default
const int size = 100;
//Creating array
int Stack[size];

//This is basically to check that the stack positon that is empty
int top = -1;

void push(int value) {
	if (top == size - 1) {
		cout << "Array is Full\n";
		return;
	}
	Stack[++top] = value;
}

int pop() {
	if (top == -1) {
		cout << "Array is Empty";
		return -1;
	}
	return Stack[top--];
}

void reversearray() {
	//creating an empty array
	int temp[size];
	//This is to check index which is empty right now 
	int temp2 = -1;
	while (top != -1) {
		temp[++temp2] = pop();
	}
	for (int i = 0; i <= temp2; i++) {
		push(temp[i]);
	}
}

void displayarray() {
	for (int i = 0; i <=top; i++)
	{
		cout<<Stack[i]<<" ";
	}
}

int main() {
	int arr[size], size;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << endl;
	cout << "Enter the elements of the array: "<<endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		push(arr[i]);
	}

	cout << "Descending Order: ";
	displayarray();
	cout << endl;
	reversearray();
	cout << "Ascending Order: ";
	displayarray();

	return 0;
}