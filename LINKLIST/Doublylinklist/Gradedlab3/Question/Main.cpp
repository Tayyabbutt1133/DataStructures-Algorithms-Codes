#include"func.h";
int main()
{
	linklist* head = NULL;
	linklist* second = NULL;
	linklist* tail = NULL;

	head = new linklist("E");
	second = new linklist("F");
	tail = new linklist("G");

	head->next = second;
	second->prev = head;
	second->next = tail;
	tail->prev = second;

	head->display(head);

	int count;
	cout << "How many times do you want to insert data at the beginning:" << endl;
	cin >> count;

	string data;
	for (int i = 0; i < count; i++)
	{
		cout << "Enter the value to insert at the beginning of the linked list:" << endl;
		cin >> data;
		head = head->insertAtBeginning(head, data);
	}

	cout << "After inserting nodes at the beginning:" << endl;
	head->display(head);

	int position;
	cout << "Enter the position of the node to delete: ";
	cin >> position;

	head->deleteNode(head, position);

	cout << "After deleting a node at position " << position << ":" << endl;
	head->display(head);

	int nodeCount = head->getCount(head);
	cout << "Number of nodes in the linked list: " << nodeCount << endl;

	return 0;
}
