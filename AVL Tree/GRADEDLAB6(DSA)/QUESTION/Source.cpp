#include"func.h"

int main() {
	Node* root = NULL;

	root = insert(root, 40);
	root = insert(root, 50);
	root = insert(root, 60);
	root = insert(root, 70);
	root = insert(root, 80);
	root = insert(root, 55);

	cout << "Preorder traversal: ";
	preorderTraversal(root);
	cout << endl;

	return 0;
}
