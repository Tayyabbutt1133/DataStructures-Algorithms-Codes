#include <iostream>
using namespace std;

template <class Type>
class List {
protected:
	Type * arr;
	int maxSize;
	int currentSize;

public:
	List(int size = 10) {
		maxSize = size;
		currentSize = 0;
		arr = new Type[maxSize];
	}

	virtual ~List() {
		delete[] arr;
	}

	virtual void addElementAtFirstIndex(Type element) = 0;

	virtual void addElementAtLastIndex(Type element) = 0;

	virtual Type removeElementFromEnd() = 0;

	virtual void removeElementFromStart() = 0;

	virtual void updateElementsFromList() = 0;
};

template <class Type>
class ArrayList : public List<Type> {
public:
	ArrayList(int size = 10) : List<Type>(size) {
		this->maxSize = size;
		this->currentSize = 0;
		this->arr = new Type[this->maxSize];
	}

	virtual ~ArrayList() {}

	void addElementAtFirstIndex(Type element) override {
		if (this->currentSize == this->maxSize) {
			cout << "List is full!" << endl;
			return;
		}
		for (int i = this->currentSize; i > 0; i--) {
			this->arr[i] = this->arr[i - 1];
		}
		this->arr[0] = element;
		this->currentSize++;
	}

	void addElementAtLastIndex(Type element) override {
		if (this->currentSize == this->maxSize) {
			cout << "List is full!" << endl;
			return;
		}
		this->arr[this->currentSize] = element;
		this->currentSize++;
	}

	Type removeElementFromEnd() override {
		if (this->currentSize == 0) {
			cout << "List is empty!" << endl;
			return NULL;
		}
		Type element = this->arr[this->currentSize - 1];
		this->currentSize--;
		return element;
	}

	void removeElementFromStart() override {
		if (this->currentSize == 0) {
			cout << "List is empty!" << endl;
			return;
		}
		for (int i = 0; i < this->currentSize - 1; i++) {
			this->arr[i] = this->arr[i + 1];
		}
		this->currentSize--;
	}

	void updateElementsFromList() override {
		if (this->currentSize == 0) {
			cout << "List is empty!" << endl;
			return;
		}
		int pos;
		cout << "Enter the position of the element to update: ";
		cin >> pos;
		if (pos < 0 || pos >= this->currentSize) {
			cout << "Invalid position!" << endl;
			return;
		}
		cout << "Enter the new value: ";
		cin >> this->arr[pos];
	}
};

int main() {
	List<int> * myList = new ArrayList<int>();
	myList->addElementAtLastIndex(5);
	myList->addElementAtLastIndex(10);
	myList->addElementAtFirstIndex(1);
	myList->removeElementFromStart();
	myList->updateElementsFromList();
	cout << "Removed element: " << myList->removeElementFromEnd() << endl;
	delete myList;
	return 0;
}
