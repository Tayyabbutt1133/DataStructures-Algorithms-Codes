#pragma once
#include"struct.h"

// Function to get the height of a node
int getHeight(Node* node)
{
	if (node == NULL) {
		return 0;
	}
	return node->height;
}

// Function to update the height of a node
void updateHeight(Node* node)
{
	node->height = 1 + max(getHeight(node->left), getHeight(node->right));
}

// Function to perform a right rotation
Node* rotateRight(Node* y)
{
	Node* x = y->left;
	Node* T2 = x->right;

	x->right = y;
	y->left = T2;

	updateHeight(y);
	updateHeight(x);

	return x;
}

// Function to perform a left rotation
Node* rotateLeft(Node* x)
{
	Node* y = x->right;
	Node* T2 = y->left;

	y->left = x;
	x->right = T2;

	updateHeight(x);
	updateHeight(y);

	return y;
}

// Function to calculate the balance factor of a node
int getBalanceFactor(Node* node) {
	if (node == NULL) {
		return 0;
	}
	return getHeight(node->left) - getHeight(node->right);
}

// Function to insert a new node in AVL tree
Node* insert(Node* root, int value) {
	if (root == NULL) {
		return new Node(value);
	}

	if (value < root->data) {
		root->left = insert(root->left, value);
	}
	else {
		root->right = insert(root->right, value);
	}

	updateHeight(root);

	int balanceFactor = getBalanceFactor(root);

	// Left Left case
	if (balanceFactor > 1 && value < root->left->data) {
		return rotateRight(root);
	}

	// Right Right case
	if (balanceFactor < -1 && value > root->right->data) {
		return rotateLeft(root);
	}

	// Left Right case
	if (balanceFactor > 1 && value > root->left->data) {
		root->left = rotateLeft(root->left);
		return rotateRight(root);
	}

	// Right Left case
	if (balanceFactor < -1 && value < root->right->data) {
		root->right = rotateRight(root->right);
		return rotateLeft(root);
	}

	return root;
}

// Function to perform preorder traversal of AVL tree
void preorderTraversal(Node* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}
