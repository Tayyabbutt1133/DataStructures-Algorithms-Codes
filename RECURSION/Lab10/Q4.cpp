#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
	node *prev;
	node()
	{
		data = 0;
		next = nullptr;
		prev = nullptr;
	}
	node(int data, node *next, node *prev)
	{
		this->data = data;
		this->next = next;
		this->prev = prev;
	}
};

class doublylinklist
{
public:
	node *head;
	doublylinklist()
	{
		head = NULL;
	}

	// Function to count the occurrences in the linked list
	int occurrence_of_linklist(node *current, int key)
	{
		if (current == NULL)
		{
			return 0;
		}

		int count = 0;
		if (current->data == key)
		{
			count = 1;
		}

		return count + occurrence_of_linklist(current->next, key);
	}
};

int main()
{
	int value;
	node *current = new node();
	node *first = new node();
	node *second = new node();
	node *third = new node();
	node *fourth = new node();
	node *five = new node();

	cout << "Enter Value you want to enter: ";
	cin >> value;
	current->data = value;
	current->prev = NULL;
	current->next = second;

	cout << "Enter Value you want to enter: ";
	cin >> value;
	second->data = value;
	second->prev = current;
	second->next = third;

	cout << "Enter Value you want to enter: ";
	cin >> value;
	third->data = value;
	third->prev = second;
	third->next = fourth;

	cout << "Enter Value you want to enter: ";
	cin >> value;
	fourth->data = value;
	fourth->prev = third;
	fourth->next = five;

	cout << "Enter Value you want to enter: ";
	cin >> value;
	five->data = value;
	five->prev = fourth;
	five->next = NULL;

	doublylinklist du;
	cout << "Enter the key to count its occurrences: ";
	int key;
	cin >> key;

	int count = du.occurrence_of_linklist(current, key);
	cout << "Occurrences of " << key << " in the linked list: " << count << endl;

	// Clean up memory
	delete current;
	delete first;
	delete second;
	delete third;
	delete fourth;
	delete five;

	return 0;
}
