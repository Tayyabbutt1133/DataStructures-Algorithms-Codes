/*
Recursive Form of Factorial Function

*/


#include <iostream>
using namespace std;

int Factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    else{
        return n* Factorial(n-1);
    }
}

int main(){
    cout<<"Factorial of 5 is "<<Factorial(5);
}
