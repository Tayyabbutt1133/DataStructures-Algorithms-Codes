#include "DoublyLinkedList.h"

class DLL :public DoublyLinkedList
{
public:
	void insertAtTail(int value);
	void insertAtHead(int value);
	void insertSorted(int value);
	void displayFromHead();
	void displayFromTail();
	int deleteFromHead();
	int deleteFromTail();
	bool deleteValue(int);
};

bool DLL::deleteValue(int value)
{
	if (head == nullptr && tail == nullptr)
		return false;

	else if (head == tail)
	{
		if (value == head->data)
		{
			delete head;
			head = nullptr;
			tail = nullptr;
			return true;
		}
		else
			return false;
	}

	else if (value == head->data)
	{
		deleteFromHead();
		return true;
	}

	else if (value == tail->data)
	{
		deleteFromTail();
		return true;
	}

	else
	{
		Node*temp = tail;
		while (1)
		{
			if (temp->data == value)
			{
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
				delete temp;
				temp = nullptr;
				return true;
			}

			else
				temp = temp->prev;

			if (temp == nullptr)
				return false;
		}
	}




}

int DLL::deleteFromTail()
{
	if (head == nullptr && tail == nullptr)
		return NULL;

	else if (head == tail)
	{
		int rv = head->data;
		delete head;
		head = nullptr;
		tail = nullptr;
		return rv;
	}

	else
	{
		int rv = tail->data;
		tail = tail->prev;
		delete tail->next;
		tail->next = nullptr;
		return rv;
	}

}

int DLL::deleteFromHead()
{
	if (head == nullptr && tail == nullptr)
		return NULL;

	else if (head == tail)
	{
		int rv = head->data;
		delete head;
		head = nullptr;
		tail = nullptr;
		return rv;
	}

	else
	{
		int rv = head->data;
		head = head->next;
		delete head->prev;
		head->prev = nullptr;

		return rv;
	}

}

void DLL::insertSorted(int value)
{
	if (head == nullptr && tail == nullptr)
	{
		Node*nn = new Node;
		nn->data = value;
		nn->next = nullptr;	//not NULL
		nn->prev = nullptr;

		head = nn;
		tail = nn;
	}

	else if (value >= head->data)
		insertAtHead(value);

	else if (value <= tail->data)
		insertAtTail(value);

	else
	{
		Node*temp = head;

		while (1)
		{
			if (value < temp->data && value >= temp->next->data)
			{
				Node*nn = new Node;
				nn->data = value;
				nn->next = nullptr;	//not NULL
				nn->prev = nullptr;
				
				nn->next = temp->next;
				nn->prev = temp;
				temp->next = nn;
				nn->next->prev = nn;
				
				break;
			}
			temp = temp->next;
		}
	}
}

void DLL::insertAtHead(int value)
{
	Node*nn = new Node;
	nn->data = value;
	nn->next = nullptr;	//not NULL
	nn->prev = nullptr;

	if (head == nullptr && tail == nullptr)
	{
		head = nn;
		tail = nn;
	}

	else
	{
		nn->next = head;
		head->prev = nn;
		head = nn;
	}
}

void DLL::insertAtTail(int value)
{
	Node*nn = new Node;
	nn->data = value;
	nn->next = nullptr;	//not NULL
	nn->prev = nullptr;

	if (head == nullptr && tail == nullptr)
	{
		head = nn;
		tail = nn;
	}

	else
	{
		tail->next = nn;
		nn->prev = tail;
		tail = nn; 
	}
}

void DLL::displayFromHead()
{
	Node*temp = head;
	while (1)
	{
		if (temp == nullptr)
			break;

		cout << temp->data << endl;
		temp = temp->next;
	}
}

void DLL::displayFromTail()
{
	Node*temp = tail;
	while (1)
	{
		if (temp == nullptr)
			break;

		cout << temp->data << endl;
		temp = temp->prev;
	}
}