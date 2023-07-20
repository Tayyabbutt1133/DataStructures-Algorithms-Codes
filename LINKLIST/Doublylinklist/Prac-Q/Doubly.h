#include"Node.h"

template <class T>
class Doubly{
protected:
	Node <T>*head;
	Node <T>*tail;
public:
	Doubly(){
		head = tail = nullptr;
	}
	virtual void insertAtHead(T v) = 0;
	virtual void insertAtTail(T v) = 0;
	virtual void displayfromtail() = 0;
	virtual void displayfromhead() = 0;
	virtual T deleteFromTail() = 0;
};