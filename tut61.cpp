#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // Connecting our file with hout strream
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name";
    cin>>name;

    // Writing a string to the file
    hout<< name + " is my name";
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of the file is: "<<content;

    return 0;
}