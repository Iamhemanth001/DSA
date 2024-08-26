/*
Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

Sample Input:- Enter a number: 4
Sample Output:- The factorial of 4 is: 24
*/

#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }

    return n*fact(n-1);
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"The factorial of "<<n<<" is: "<<fact(n);

    return 0;
}