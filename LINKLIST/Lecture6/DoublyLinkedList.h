#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node*next;
	Node*prev;
};

class DoublyLinkedList
{
protected:
	Node*head;
	Node*tail;
public:
	virtual void insertAtTail(int) = 0;
	virtual void insertAtHead(int) = 0;
	virtual void insertSorted(int) = 0;
	virtual int deleteFromHead() = 0;
	virtual int deleteFromTail() = 0;
	virtual bool deleteValue(int) = 0;
	virtual void displayFromHead() = 0;
	virtual void displayFromTail() = 0;
	
	DoublyLinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
};