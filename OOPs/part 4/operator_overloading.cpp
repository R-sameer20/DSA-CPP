#include<iostream>
using namespace std;
class ComplexNumber{
    public:
    int real;
    int imaginary;

    ComplexNumber operator + (ComplexNumber &c1){
         ComplexNumber c3;
         c3.imaginary = c1.imaginary + this->imaginary;
         c3.real = c1.real + this->real;
         return c3;
    }

    ComplexNumber operator - (ComplexNumber &c1){
         ComplexNumber c3;
         c3.imaginary = c1.imaginary - this->imaginary;
         c3.real = c1.real - this->real;
         return c3;
    }

};

int main(){
    ComplexNumber c1 , c2;
    c1.real = 10;
    c1.imaginary = 5;

    c2.real = 50;
    c2.imaginary = 60;

    ComplexNumber c3 = c1 + c2;
    cout<<"Real = "<<c3.real<<" "<<"imaginary = "<<c3.imaginary;
    cout<<endl;
    ComplexNumber c4 = c1 - c2 - c3 ;
    cout<<"Real = "<<c4.real<<" "<<"imaginary = "<<c4.imaginary;




}


// c1 + c2	    c1.operator+(c2)

// this	        Pointer to calling object

// this->real	Member of calling object

// Parameter	Right-side operand