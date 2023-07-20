#pragma once
#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node *prev;
	//Default constructor
	node()
	{
		data = 0;
		next = NULL;
		prev = NULL;
	}
	//Parameterized constructor
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
	//Function calling
	void display_even_numbers(node *head);
};
