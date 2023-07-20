#include<iostream>
#include"Doubly.h"

using namespace std;


template <class T>
class MYDLL :public Doubly<T>{
public:
	void insertAtHead(T v){
		Node<T> *n = new Node<T>;
		n->next = nullptr;
		n->prev = nullptr;
		n->data = v;
		if (head == nullptr){
			head = n;
			tail = n;
		}
		else{
			n->next = head;
			head->prev = n;
			head = n;
		}
	}

	void displayfromtail(){
		Node<T>*temp = tail;

		while (temp != nullptr){
			cout << temp->data << " ";
			temp = temp->prev;
		}
	}
		void displayfromhead(){
			Node<T>*temp = head;

			while (temp != nullptr){
				cout << temp->data << " ";
				temp = temp->next;
			}

		}
		void insertAtTail(T v){
			Node<T> *n = new Node<T>;
			n->next = nullptr;
			n->prev = nullptr;
			n->data = v;
			if (head == nullptr){
				head = n;
				tail = n;
			}
			else{
				tail->next = n;
				n->prev = tail;
				tail = n;

			}
		}
		T  deleteFromTail(){
			if (head == nullptr)
				return NULL;

			T temp = tail->data;

			if (head == tail){
				delete head;
				head = tail = nullptr;
			}
			else{
				Node<T>*t = tail;

				tail = tail->prev;
				tail->next = nullptr;
				delete t;
			}
			return temp;

		}


		T sum_of_list(){
			if (head->next == nullptr)
			{
				T temp = head->data;
				Node<T>*c = tail;
				while (c->prev != nullptr)
					c = c->prev;
				head = c;
				return temp;
			}

				
			head = head->next;

			return head->prev->data + sum_of_list();

		}

		
};