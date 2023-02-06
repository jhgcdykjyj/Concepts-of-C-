
// There are two types of header files
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by programmer
//#include "this.h" //This will produce an error if not in current directory
using namespace std;

int main(){
int a;
int b;
cout<<"The value of a : "<<endl;
cin>>a;
cout<<"The value of b : "<<endl;
cin>>b;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of operators in c++:"<<endl;
    // Arthmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    //assignment operators
    // int a = 3, b = 9;
    // char d = 'd'

   //comparison operators
   cout<<"Following are the comparision operators in C++"<<endl;
   cout<<"The value of a == b is "<<(a==b)<<endl;
   cout<<"The value of a != b is "<<(a!=b)<<endl;
   cout<<"The value of a >= b is "<<(a>=b)<<endl;
   cout<<"The value of a <= b is "<<(a<=b)<<endl;
   cout<<"The value of a > b is "<<(a>b)<<endl;
   cout<<"The value of a < b is "<<(a<b)<<endl;

   //Logical operators
   cout<<"Following are the logical operators"<<endl;
   cout<<"The value of this logical and operator ((a==b)) && (a<b)) is : "<<((a==b) && (a<b))<<endl;
   cout<<"The value of this logical or operator ((a==b) || (a<b)) is:  "<<((a==b) || (a<b))<<endl;
   cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

   
    return 0;

}