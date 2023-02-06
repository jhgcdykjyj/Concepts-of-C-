#include<iostream>
#include<fstream>

/*
The useful classes for working with files in C++ :
1. fstreambase
2. ifstream --> derived from fstream.
3. ofstream --> derived from fstream.

In order to work files in C++, you will have to open it,
Their are two ways to open a file:
1. using the __cpp_delegating_constructors
2. using the member function open of the class 
*/
using namespace std;

int main(){
    string st = "Harry bhai";
    string st2;
    // Opening files using constructor
    // ofstream out("sample60.txt"); //Write operation
    // out<<st;

    // Opening a file using constructor and reading it
    ifstream in("sample60b.txt");
    //in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}