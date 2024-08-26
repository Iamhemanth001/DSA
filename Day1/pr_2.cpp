/*
Ques-02 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

Sample Input:- Enter grade 1: 85
Enter grade 2: 90
Enter grade 3: 78
Enter grade 4: 92
Enter grade 5: 88

Sample Output:- The average grade is: 86.6
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    int grade1,grade2,grade3,grade4,grade5;
    cout<<"Enter grade 1: ";
    cin>>grade1;
    cout<<"Enter grade 2: ";
    cin>>grade2;
    cout<<"Enter grade 3: ";
    cin>>grade3;
    cout<<"Enter grade 4: ";
    cin>>grade4;
    cout<<"Enter grade 5: ";
    cin>>grade5;

    float avg = float(grade1 + grade2 + grade3 + grade4 + grade5)/5;
    cout<<"The average grade is: "<<fixed<<setprecision(1)<<avg<<endl;
    return 0;
}