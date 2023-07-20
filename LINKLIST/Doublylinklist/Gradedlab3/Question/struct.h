#pragma once
#include<iostream>
#include<string>
using namespace std; 
struct linklist
{
	linklist* prev;
	linklist* next;
	string data;

	linklist(string value)
	{
		data = value;
		prev = NULL;
		next = NULL;
	}
	//Function calling
	void display(linklist* n);
	int getCount(linklist* head);
	void deleteNode(linklist* head, int position);
	linklist* insertAtBeginning(linklist* head, string value)
	{
		linklist* newNode = new linklist(value);

		if (head == NULL)
		{
			head = newNode;
		}
		else
		{
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
		}

		return head;
	}

};