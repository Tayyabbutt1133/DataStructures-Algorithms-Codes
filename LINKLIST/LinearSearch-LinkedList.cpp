#include <iostream>
using namespace std;

struct Node{
	int data;
	Node * next;
};


bool LinearSearch(Node* n, int key ){
	while ((n != NULL) && (key != n->data)){
		n = n->next;
	}
	if (n != NULL){
		return true;
	}
	else{
		return false;
	}
}

void print_list(Node * n) {
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

int main() {
	Node * head = NULL;
	Node * second = NULL;
	Node * third = NULL;
	Node * fourth = NULL;
	Node * fifth = NULL;

	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();
	 // Head Node
	head->data = 10;
	head->next = second;

	// Second
	second->data = 20;
	second->next = third;
	//third
	third->data = 30;
	third->next = fourth;
	//fourth
	fourth->data = 40;
	fourth->next = fifth;
	//fifth
	fifth->data = 50;
	fifth->next = NULL;

	print_list(head);
	cout << endl;

	if (LinearSearch(head,50)){
		cout << "Key found" << endl;
	}
	else{
		cout << "Key not found" << endl;
	}

	system("pause");
}