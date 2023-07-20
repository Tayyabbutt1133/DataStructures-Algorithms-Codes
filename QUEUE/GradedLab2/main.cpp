#include"queue.h"

int main()
{
	cout << "Original String is:" << endl; 
	queue q1;
	q1.enque('T');
	q1.enque('A');
	q1.enque('Y');
	q1.enque('Y');
	q1.enque('A');
	q1.enque('B');
	cout << q1.peek();
	q1.deque();

	cout << q1.peek();
	q1.deque();

	cout << q1.peek();
	q1.deque();

	cout << q1.peek();
	q1.deque();

	cout << q1.peek();
	q1.deque();
	cout << q1.peek();
	q1.deque();
	cout << endl;
	cout << "After changing in String is:" << endl;
	queue q;
	q.enque('T');
	q.enque('A');
	q.enque('Y');
	q.enque('Y');
	q.enque('A');
	q.enque('B');
	//First character deque
	q.deque();
	//Now checking through peek then deque it from array
	cout << q.peek();
	q.deque();

	cout << q.peek();
	q.deque();

	cout << q.peek();
	q.deque();

	cout << q.peek();
	q.deque();

	cout << q.peek();
	q.deque();

	q.enque('T');
	cout << q.peek();

	cout << endl;
	if (q.isempty() == true)
	{
		cout << "Queue is Empty";
	}
	else
		cout << "Queue is Full and First character of string deque then Enque successfully in Last";

}