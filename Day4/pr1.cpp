/*Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
Addition
Subtraction
Multiplication
Division (ensure that you handle division by zero)
Modulus

Sample Output :-

Enter first integer: 10
Enter second integer: 3
Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3.33333
Modulus: 1
*/

#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout<<"Enter first integer: ";
    cin>>num1;
    cout<<"Enter second integer: ";
    cin>>num2;

    cout<<"Addition: "<<num1 + num2<<endl;
    cout<<"Subtraction: "<<num1 - num2<<endl;
    cout<<"Multiplication: "<<num1 * num2<<endl;

    if(num2!=0){
        cout<<"Division: "<<double(num1)/num2<< endl;
    }else{
        cout<<"Division: Error! Division by zero."<<endl;
    }

    if(num2!=0) {
        cout<<"Modulus: "<<num1%num2<<endl;
    }else{
        cout<<"Modulus: Error! Division by zero."<<endl;
    }

    return 0;
}
