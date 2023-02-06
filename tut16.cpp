#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;

}
// This will not swap 'a' and 'b'.
// void swap(int a, int b){ //temp a  b
//     int temp = a;          //4  4  5
//     a = b;                 //4  5  5
//     b = temp;              //4  5  4
// }

// call by reference by using pointers
void swapPointer(int* a, int* b){ //temp a  b
    int temp = *a;          //4  4  5
    *a = *b;                 //4  5  5
    *b = temp;              //4  5  4
}

// call by reference using C++ reference variables(best way)
// int &
void swapReferenceVar(int &a, int &b){ //temp a  b
    int temp = a;          //4  4  5
    a = b;                 //4  5  5
    b = temp;              //4  5  4;
}



int main(){
    // cout<<"The sum of 4 and 5 is "<<sum(4, 5);
    int a = 4, b = 5;
   cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
   // swap(a, b); Not going to work.
   //swapPointer(&a, &b);
   swapReferenceVar(a, b);
//    swapReferenceVar(a, b) = 766;
   cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

   
   
   
   
    return 0;
}