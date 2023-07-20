#include"struct.h"
// Function to create a new node
Node* createNode(int data) {
	Node* newNode = new Node();
	if (!newNode) {
		cout << "Memory error\n";
		return NULL;
	}
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// Function to insert a node in BST
Node* insertNode(Node* root, int data) {
	if (root == NULL)
	{
		root = createNode(data);
		return root;
	}
	if (data < root->data)
	{
		root->left = insertNode(root->left, data);
	}
	else if (data > root->data)
	{
		root->right = insertNode(root->right, data);
	}
	return root;
}

// Function to find the kth largest element in BST
void mostLargestnum(Node* root, int k, int& count)
{
	if (root == NULL || count >= k)
	{
		return;
	}

	mostLargestnum(root->right, k, count);
	count++;
	if (count == k)
	{
		cout << "3rd largest element: " << root->data << endl;
		return;
	}
	mostLargestnum(root->left, k, count);
}

void find3rdLargestElement(Node* root)
{
	int count = 0;
	int k = 3; // Find the 3rd largest element
	mostLargestnum(root, k, count);
}
