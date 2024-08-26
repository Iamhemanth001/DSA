/*
Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.

Sample Input:- Enter a number: 5
Sample Output:- The sum of the first 5 natural numbers is: 15"
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum = (n*(n+1))/2;
    cout<<"The sum of the first "<<n<<"natural numbers is: "<<sum<<endl;

    return 0;
}