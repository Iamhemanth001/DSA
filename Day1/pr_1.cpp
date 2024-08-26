/*
Day - 01 Questions - Week-01 (August 14th, 2024)
Ques - 01 Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

Sample Input :- Enter the first string: Hello
Enter the second string: World
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str1;
    string str2;

    cout<<"Enter the first string: ";
    getline(cin,str1);
    cout<<"Enter the second string: ";
    getline(cin,str2);

    str1 = str1 + str2;
    cout<<"concatenated string: "<<str1<<endl;
    return 0;
} 