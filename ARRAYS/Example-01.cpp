/*
Write a function that takes a single input, a number, 
and prints out 1 through the number. If the number being 
printed is divisible by 3, print "Fizz" instead of the 
number itself. If the number being printed is divisible 
by 5, print "Buzz." If the number being printed is 
divisible by 3 AND 5, print "FizzBuzz." 

*/


#include <iostream>
using namespace std;

void funDivisibility(int n){
    for (int i=1;i<=n;i++){
        if (i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if (i%5==0){
            cout<<"Buzz"<<endl;
        }
        else if (i%3==0){
            cout<<"Fizz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}

int main() {
    funDivisibility(17);
    return 0;
}
