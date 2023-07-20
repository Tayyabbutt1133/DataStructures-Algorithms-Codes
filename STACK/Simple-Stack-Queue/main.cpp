#include "Queue.h"

int main(){
    Queue qu;
    qu.Front();
    qu.Enqueue(10);
    qu.Dequeue();
    qu.Enqueue(11);
    qu.Enqueue(20);
    qu.Enqueue(30);
    qu.Enqueue(40);
    qu.Enqueue(50);
    qu.Enqueue(60);
    qu.Dequeue();
    qu.Front();


}