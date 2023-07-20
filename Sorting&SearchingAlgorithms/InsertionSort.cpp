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

int* InsertionSort(int A[], int Asize) {
	
	for (int i = 1; i <= Asize; i++) {
		int key = A[i];
		int j = i - 1;
		while ((A[j] > key) && (j > 0)) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = key;
	}
	return A;
}




int main() {
	int A[] = { 50,10,0,11,41,49,786 };
	int mSize = sizeof(A) / 4;
	InsertionSort(A, mSize - 1);
	if (BinarySearch(A,0,mSize-1,41)) {
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

