/*
Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
Grade Criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

Sample Input:- Enter the score: 85
Sample Output:- Grade: B"*/

#include<iostream>
using namespace std;

int main(){

    int score;
    cout<<"Enter the score: ";
    cin>>score;

    if(score >= 90 && score<= 100){
        cout<<"Grade: A"<<endl;
    }else if(score >= 80 && score<= 89){
        cout<<"Grade: B"<<endl;
    }else if(score >= 70 && score<= 79){
        cout<<"Grade: C"<<endl;
    }else if(score >= 60 && score<= 69){
        cout<<"Grade: D"<<endl;
    }else if(score >= 0 && score<= 59){
        cout<<"Grade: F"<<endl;
    }

    return 0;
}