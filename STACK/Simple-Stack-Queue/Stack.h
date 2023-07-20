#include <iostream>
using namespace std;
#define max 5

class Stack{
    int A[max];
    int top;
public:
    Stack(){top=-1;}
    bool isEmpty();
    bool isFull();
    void Push(int);
    void Pop();
    void Peak();
};

bool Stack::isEmpty() {
    if (top==-1){
        return true;
    }
    else {
        return false;
    }
}
bool Stack::isFull() {
    if (top >= max-1){
        return true;
    }
    else{
        return false;
    }
}

void Stack::Push(int num) {
    if (!isFull()){
        A[++top] = num;
        cout << num <<" is pushed to index "<<top<<endl;
    }
    else{
        cout<< "Stack is Full"<<endl;
    }
}

void Stack::Pop() {
    if (!isEmpty()){
        cout<<A[top]<<" is popped from index "<<top<<endl;
        top--;
    }
    else{
        cout<< "Stack is Empty"<<endl;
    }
}

void Stack::Peak() {
    if (!isEmpty()){
        cout<<A[top]<<" is the last element of Stack at index "<<top<<endl;
    }
    else{
        cout<< "Stack is Empty"<<endl;
    }

}