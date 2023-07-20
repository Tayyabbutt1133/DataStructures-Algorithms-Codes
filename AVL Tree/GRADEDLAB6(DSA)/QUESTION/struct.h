#include"func.h"
#include <iostream>
#include <algorithm>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
	int height;
	//paramterized constructor
	Node(int value)
	{
		data = value;
		left = NULL;
		right = NULL;
		height = 1;
	}
};