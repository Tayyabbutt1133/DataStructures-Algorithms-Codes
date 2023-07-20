#include <iostream>
using namespace std;

bool BinarySearch(int A[], int low, int high, int key) {
	int mid = (low + high) / 2;
	while ((A[mid] != key) && (low <= high)) {
		if (key > A[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
		mid = (low + high) / 2;
	}
	if (low <= high) {
		return true;
	}
	else { return false; }


}


int main() {
	int A[] = { 1,2,3,5,7,9 };
	int mSize = sizeof(A) / 4;
	if (BinarySearch(A,0,mSize-1,4)) {
		cout << "Key Found" << endl;
	}
	else {
		cout << "Key not found" << endl;
	}
}



bool LinearSearch(int A[], int size, int key) {
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