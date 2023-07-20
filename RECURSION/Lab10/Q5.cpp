#include<iostream>
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
	}
	node(int data,node *next,node *prev)
	{
		this->data = data;
		this->next = next;
		this->prev = prev;
	}
};
 node *reverse_recursive(node *current)
{
	if (current == nullptr || current->next == nullptr)
	{
		return current;
	}

	node *newHead = reverse_recursive(current->next);
	current->next->next = current;
	current->prev = current->next;
	current->next = nullptr;

	return newHead;
}
 int main()
 {
	 int value;
	 node *current = new node();
	 node *first = new node();
	 node *second = new node();
	 node *third = new node();
	 node *fourth = new node();
	 node *five = new node();
	 cout << "Enter Value you want to enter:" << endl;
	 cin >> value;
	 current->data = value;
	 current->prev = NULL;
	 current->next = second;
	 cout << "Enter Value you want to enter:" << endl;
	 cin >> value;
	 second->data = value;
	 second->prev = current;
	 second->next = third;
	 cout << "Enter Value you want to enter:" << endl;
	 cin >> value;
	 third->data = value;
	 third->prev = second;
	 third->next = fourth;
	 cout << "Enter Value you want to enter:" << endl;
	 cin >> value;
	 fourth->data = value;
	 fourth->prev = third;
	 fourth->prev = five;
	 cout << "Enter Value you want to enter:" << endl;
	 cin >> value;
	 five->data = value;
	 five->prev = fourth;
	 five->next = NULL;
	 reverse_recursive(current);

}


