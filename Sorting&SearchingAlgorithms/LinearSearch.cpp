#include <iostream>
using namespace std;

bool LinearSearch(int A[],int size, int key) {
	int i = 0;
	while ((A[i] != key) && (i <= size)) {
		i++;
	}
	if (i <= size) {
		return true;
	}
	else {
		return false;
	}

}

int main() {
	int A[] = { 5,7,9,1,2,3 };
	int mSize = sizeof(A) / 4;
	if (LinearSearch(A,mSize-1,3)) {
		cout << "Key Found" << endl;
	}
	else {
		cout << "Key not found" << endl;
	}
}