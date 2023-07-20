#include <iostream>
using namespace std;

bool BinarySearch(int A[],int low, int high, int key){
    if (low>high){
        return false;
    }
    int mid = (low+high)/2;
    if (A[mid]==key){
        return true;
    }
    else if (A[mid]<key){
        BinarySearch(A,mid+1,high,key);
    }
    else{
        BinarySearch(A,low,mid-1,key);
    }
}

bool Palindrome (int A[],int left, int right){
    if ((left==right)||(left>right)){
        return true;
    }
    else if (A[left]!=A[right]){
        return false;
    }
    else{
        Palindrome(A,left+1, right-1);
    }
}

void SelectionSort(int A[], int size){
    if (size>=1){
        for (int i=0;i<=size-1;i++){
            if (A[i+1]<A[i]){
                swap(A[i],A[i+1]);
            }
        }
        SelectionSort(A,size-1);
    }
}

int main() {
    int A[]={1,4,5,5,4,1};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Unsorted Array"<<endl;
    for (int i=0;i<=n-1;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    SelectionSort(A,n-1);
    cout<<"Sorted Array"<<endl;
    for (int i=0;i<=n-1;i++){
        cout<<A[i]<<" ";
    }

    /*if (Palindrome(A,0,n-1)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }*/
}
