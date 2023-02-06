#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   //const int a = 34;//(If constant then a will be fixed at 34.)
   // int a = 34;
   // cout<<"The value of a was: "<<a<<endl;
   // a = 45;
   // cout<<"The value of a is: "<<a<<endl;
// //        constants in c++

// cout<<"The value of a was: "<<a<<endl;
// a = 5; 
// //You will get an error because a is a constant 
// cout<<"The value of a is: "<<a<<endl;

//              manipulators in c++


// int a = 3,b = 78, c=1233;
// cout<<"The value of a without setw is: "<<a<<endl;
// cout<<"The value of b without setw is: "<<b<<endl;
// cout<<"The value of c without setw is: "<<c<<endl;

// cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
// cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
// cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;

// Operator Presedence
int a = 3, b = 4;
int c = (((a*5)+b)-45)+87;
cout<<c;

return 0;
}