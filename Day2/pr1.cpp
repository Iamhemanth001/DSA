/*
Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

Sample Input:- Enter the first number: 10
Enter the second number: 20
Enter the third number: 15

Sample Output :- The largest number is: 20
*/

#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;

    int largest_num ;
    largest_num = (num1 > num2) ?  num1 : num2;
    largest_num = (largest_num > num3) ? largest_num : num3;

    cout<<"The largest number is "<<largest_num<<endl;
    return 0;
}