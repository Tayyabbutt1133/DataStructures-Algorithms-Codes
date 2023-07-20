#include <iostream>
using namespace std;

template <typename T>
class List {
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	List(int size = 10) : arr(new T[size]), maxSize(size), currentSize(0) {}
	virtual void addElementAtFirstIndex(T) = 0;
	virtual void addElementAtLastIndex(T) = 0;
	virtual T removeElementFromEnd() = 0;
	virtual void removeElementFromStart() = 0;
	virtual void updateElementsFromList() = 0;
	virtual ~List() {
		delete[] arr;
	}
};

template <typename T>
class MyList : public List<T> {
public:
	MyList(int size = 10) : List<T>(size) {}
	bool empty() {
		return (this->currentSize == 0);
	}
	bool full() {
		return (this->currentSize == this->maxSize);
	}
	int size() {
		return this->currentSize;
	}
	bool insertAt(int index, T value) {
		if (index >= 0 && index < this->currentSize && !full()) {
			for (int i = this->currentSize; i > index; i--) {
				this->arr[i] = this->arr[i - 1];
			}
			this->arr[index] = value;
			this->currentSize++;
			return true;
		}
		return false;
	}
	T last() {
		return this->arr[this->currentSize - 1];
	}
	bool search(T value) {
		for (int i = 0; i < this->currentSize; i++) {
			if (this->arr[i] == value) {
				return true;
			}
		}
		return false;
	}
	void addElementAtFirstIndex(T value) {
		if (!full()) {
			for (int i = this->currentSize; i > 0; i--) {
				this->arr[i] = this->arr[i - 1];
			}
			this->arr[0] = value;
			this->currentSize++;
		}
	}
	void addElementAtLastIndex(T value) {
		if (!full()) {
			this->arr[this->currentSize] = value;
			this->currentSize++;
		}
	}
	T removeElementFromEnd() {
		if (!empty()) {
			T value = this->arr[this->currentSize - 1];
			this->currentSize--;
			return value;
		}
		return 0;
	}
	void removeElementFromStart() {
		if (!empty()) {
			for (int i = 0; i < this->currentSize - 1; i++) {
				this->arr[i] = this->arr[i + 1];
			}
			this->currentSize--;
		}
	}
	void updateElementsFromList() {
		// implementation of updateElementsFromList function for MyList class
	}
};

int main() {
	MyList<int> mylist(5);
	mylist.addElementAtFirstIndex(10);
	mylist.addElementAtLastIndex(20);
	mylist.addElementAtFirstIndex(30);
	mylist.addElementAtLastIndex(40);
	mylist.addElementAtFirstIndex(50);
	mylist.removeElementFromStart();
	mylist.removeElementFromEnd();
	cout << "Is the list empty? " << (mylist.empty() ? "Yes" : "No") << endl;
	cout << "Is the list full? " << (mylist.full() ? "Yes" : "No") << endl;
}