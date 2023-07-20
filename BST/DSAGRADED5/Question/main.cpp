#include"func.h"
int main() {
	Node* root = NULL;
	int data[n];
	int user;
	cout << "How many Numbers you want to enter:" << endl;
	cin >> user;
	cout << "Enter "<<user<<" Elements:" << endl;
	for (int i = 0; i < user; i++)
	{
		cin >> data[i];
	}
	int size = sizeof(data) / sizeof(data[0]);

	for (int i = 0; i < n; i++) {
		root = insertNode(root, data[i]);
	}

	find3rdLargestElement(root);

	return 0;
}
