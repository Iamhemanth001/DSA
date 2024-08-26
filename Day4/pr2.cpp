/*
Ques-02: Create a Complex class to represent complex numbers and overload 
the +, -, operators to perform arithmetic operations on complex numbers.

Sample Output:-

Complex Number 1: 3 + 4i
Complex Number 2: 1 + 2i
Sum: 4 + 6i
Difference: 2 + 2i
*/

#include<iostream>
using namespace std;

class Complex{

    private:
        int real,imag;
    public: 
        Complex(int real,int imag){
            this->real =real;
            this->imag = imag;
        }

        Complex operator + (const Complex & other){
            return Complex(real + other.real,imag + other.imag);
        }

        Complex operator - (const Complex & other){
            return Complex(real - other.real,imag - other.imag);
        }

        void show(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main(){
    Complex c1(3,2);
    Complex c2(8,3);

    cout<<"Complex number: ";
    c1.show();
    cout<<"Complex number: ";
    c2.show();

    Complex sum = c1+c2;
    cout<<"Sum: ";
    sum.show();

    Complex diff = c1-c2;
    cout<<"Difference: ";
    diff.show();
    return 0;
}