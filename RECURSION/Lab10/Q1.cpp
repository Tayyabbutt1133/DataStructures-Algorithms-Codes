#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
	//Default constructor
	node()
	{
		data = 0;
		next = NULL;
	}
	//Parameterized constructor
	node(int data,node *next)
	{
		this->data = data;
		this->next = NULL;
	}
};

class linklist
{
	node *head;
public:
	//Default constructor
	linklist()
	{
		head = NULL;
	}
	//Functions calling
	int sum_of_list(node *h);
};
int linklist::sum_of_list(node *head)
{
	if (head==NULL)
	{
		return 0;
	}
	else
	{
		//Recursively calling
		return head->data + sum_of_list(head->next);
	}
}

int main()
{
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;
	head = new node();
    second = new node();
	third = new node();
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	linklist li;
	cout << "Sum of linklist through recursive functionality:" << endl;
	cout<<li.sum_of_list(head);
}



