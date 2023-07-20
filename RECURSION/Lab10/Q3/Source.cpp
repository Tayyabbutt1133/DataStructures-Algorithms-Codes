#include"func.h"
int main()
{
	node *current = new node();
	node *first = new node();
	node *second = new node();
	node *third = new node();
	node *fourth = new node();
	node *five = new node();
	current->data = 2;
	current->prev = NULL;
	current->next = second;

	second->data = 2;
	second->prev = current;
	second->next = third;

	third->data = 6;
	third->prev = second;
	third->next =fourth;

	fourth->data = 4;
	fourth->prev = third;
	fourth->prev = five;
	five->data = 1;
	five->prev = fourth;
	five->next = NULL;
	doublylinklist du;
	cout << "Even Numbers in the list are:" << endl;
	du.display_even_numbers(current);
}





