#pragma once
#include"class.h"
void doublylinklist::display_even_numbers(node *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->data % 2 == 0)
	{
		cout << head->data << " ";
	}
	display_even_numbers(head->next);
}
