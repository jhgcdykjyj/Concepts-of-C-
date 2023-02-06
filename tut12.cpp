#include<iostream>
using namespace std;

int main(){
    //what is pointers?
    //Data type which holds the address of other data types
    
    int a = 3;
    int * b = &a;
    // &---> Address of operator 
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;

    // * ---> Dereferance operator
    cout<<"The value at address b is "<<*b<<endl;
    
    int** c = &b;
    cout<<"The Address of b is "<<&b<<endl;
    cout<<"The Address of b is "<<c<<endl;
    cout<<"The Value at b is "<<*c<<endl;
    cout<<"The Value at b is "<<**c<<endl;


     return 0;
}