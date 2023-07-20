#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;

	Node() {
		data = 0;
		next = NULL;
		prev = NULL;
	}

	Node(int data, Node* next, Node* prev) {
		this->data = data;
		this->next = next;
		this->prev = prev;
	}
};

class DoublyLinkedList {
public:
	Node* head;

	DoublyLinkedList() {
		head = NULL;
	}

	void addNode(int data) {
		Node* newNode = new Node(data, NULL, NULL);

		if (head == NULL) {
			head = newNode;
		}
		else {
			Node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->prev = temp;
		}
	}

	bool isPrime(int num) {
		if (num <= 1) {
			return false;
		}
		for (int i = 2; i * i <= num; i++) {
			if (num % i == 0) {
				return false;
			}
		}
		return true;
	}

	int product_of_prime(Node* current)
	{
		if (current == NULL)
		{
			return 1;
		}

		if (isPrime(current->data))
		{
			return current->data * product_of_prime(current->next);
		}
		else
		{
			return product_of_prime(current->next);
		}
	}
};

int main() {
	DoublyLinkedList list;

	list.addNode(2);
	list.addNode(3);
	list.addNode(4);
	list.addNode(5);
	list.addNode(6);
	list.addNode(7);

	int product = list.product_of_prime(list.head);
	cout << "Product of prime numbers: " << product << endl;

	return 0;
}
