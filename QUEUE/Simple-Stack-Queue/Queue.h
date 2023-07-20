#include <iostream>
using namespace std;
#define max 5

class Queue{
    int A[max];
    int top;
public:
    Queue(){top=-1;}
    bool isEmpty();
    bool isFull();
    void Enqueue(int);
    void Dequeue();
    void Front();
};

bool Queue::isEmpty() {
    if (top==-1){
        return true;
    }
    else {
        return false;
    }
}
bool Queue::isFull() {
    if (top >= max-1){
        return true;
    }
    else{
        return false;
    }
}

void Queue::Enqueue(int num) {
    if (!isFull()){
        A[++top] = num;
        cout << num <<" is inserted to index "<<top<<endl;
    }
    else{
        cout<< "Queue is Full"<<endl;
    }
}

void Queue::Dequeue(){
    if (!isEmpty()){
        cout<<A[0]<<" is extracted from index "<<0<<endl;
        int i =0;
        while (i<=top-1){
            A[i]=A[i+1];
            i++;
        }
        top--;

    }
    else{
        cout<< "Queue is Empty"<<endl;
    }
}

void Queue::Front() {
    if (!isEmpty()){
        cout<<A[0]<<" is the first element of Queue at index "<<0<<endl;
    }
    else{
        cout<< "Queue is Empty"<<endl;
    }

}