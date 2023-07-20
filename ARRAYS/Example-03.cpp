/*
Write a function that takes in two string inputs, 
and returns true if they are a rotation of each other.
*/

#include <iostream>
using namespace std;

bool CheckRotation(string s1, string s2){
    if (s1.length()!=s2.length()){
        return false;
    }
    else{
        string temp = s1 + s1; //storing concatenated string

        int n = temp.length();
        int m = s2.length();

        // checking if s2 is present in temp
        for(int i = 0; i<n-m; i++)
        {
            int flag = 1, j;
            for(j = 0; j < m-1; j++)
            {
                if(s2[j] != temp[i+j])
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1){
                return true;// return true if s2 is present in temp
            }
        }

        return false;

    }
}

int main(){
    if (CheckRotation("abcd","cdab")){
        cout<<"Rotation True";
    }
    else{
        cout<<"Rotation False";
    }
}

