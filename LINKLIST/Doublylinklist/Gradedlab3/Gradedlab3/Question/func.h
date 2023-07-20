#pragma once
#include"struct.h"

void linklist::display(linklist* n)
{
	while (n != NULL)
	{
		cout << n->data << endl;
		n = n->next;
	}
}
void linklist::deleteNode(linklist* head, int position)
{
	if (head == NULL)
	{
		cout << "List is empty." << endl;
		return;
	}

	linklist* currentNode = head;
	int currentPosition = 1;

	while (currentPosition < position && currentNode != NULL)
	{
		currentNode = currentNode->next;
		currentPosition++;
	}

	if (currentNode == NULL)
	{
		cout << "Invalid position." << endl;
		return;
	}

	if (currentNode->prev != NULL)
		currentNode->prev->next = currentNode->next;
	else
		head = currentNode->next;

	if (currentNode->next != NULL)
		currentNode->next->prev = currentNode->prev;

	delete currentNode;
}

int linklist::getCount(linklist* head)
{
	int count = 0;
	linklist* current = head;
	while (current !=NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}

