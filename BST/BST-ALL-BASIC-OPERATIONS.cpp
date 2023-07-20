#include<iostream>
using namespace std;

struct Bst
{
	int data;
	Bst *left;
	Bst*right;
	//Paramterized contructor
	Bst(int data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
};
Bst *insertBST(Bst *root ,int value)
{
	if (root == NULL)
	{
		return new Bst(value);
	}
		if (value < root->data)
		{
			//Recursively call left side of tree 
			root->left = insertBST(root->left, value);

		}
		else
		{
			//if value>root->data
			root->right = insertBST(root->right, value);
		}
		return root;
}
Bst *searchinBst(Bst *root,int key)
{
	if (root==NULL|| root->data==key)
	{
		return root;
	}
	    //value=5<7
	if (key<root->data)
	{
		return searchinBst(root->left,key);
	}
	    //value=9>5
	return searchinBst(root->right, key);
}
Bst *findminnode(Bst *root)
{
	if (root->left==NULL)
	{
		return root;
	}
	return findminnode(root->right);
}
Bst *findmaxnode(Bst *root)
{
	if (root->right == NULL)
	{
		return root;
	}
	return findmaxnode(root->right);
}
Bst *deletenode(Bst *root, int key)
{
	/*if (root==NULL|| root->data==key)
	{

	}*/
	if (key < root->data)
	{
		root->left = deletenode(root->left, key);
	}
	else if (key>root->data)
	{
		root->right = deletenode(root->right, key);
	}
	else
	{
		if (root->left==NULL)
		{
			Bst *temp = root->right;
			delete root;
			return temp;
		}
		else if (root->right==NULL)
		{
			Bst *temp = root->left;
			delete root;
			return temp;
		}
		Bst *temp = findminnode(root->right);
		root->data = temp->data;
		root->right = deletenode(root->right,temp->data);
	}
	return root;
}
//pre-order->root,left,right
//post-order->left,right,root
void inorder(Bst*root)
{
	if (root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
int main()
{
	Bst *root = NULL;
	root = insertBST(root, 5);
	 insertBST(root, 1);
	 insertBST(root, 3);
	insertBST(root, 4);
	insertBST(root, 2);
	insertBST(root, 7);
	cout << "Original Tree:" << endl;
	inorder(root);
	cout << endl;
	int key1;
	cout << "Enter key to find in tree:" << endl;
	cin >> key1;
	if (searchinBst(root, key1) == NULL)
	{
		cout << "Key Doesn't exist" << endl;
	}
	else
	{
		cout << "Key Exist";
	}
	cout << endl;
	inorder(root);
	cout << endl;
	int key;
	cout << "Enter key to delete from tree:" << endl;
	cin >> key;
	root = deletenode(root, key);
	cout << "After deleting node:" << endl;
	inorder(root);
	return 0;
}	
