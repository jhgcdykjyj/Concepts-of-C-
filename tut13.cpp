#include<iostream>
using namespace std;

int main(){
    // Array example
    int marks[] = {23, 45, 56, 89};

    int mathmarks[4];
    mathmarks[0]=780;
    mathmarks[1]=781;
    mathmarks[2]=782;
    mathmarks[3]=783;
   // You can change the value of an array


    cout<<"These are mathsmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    mathmarks[2]=20;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

for (int i=0; i < 4; i++)
{
    cout<<"The value of marks "<<i<<" is " <<marks[i]<<endl;
}
//  POINTERS AND ARRAYS 

int *p = marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
cout<<"The value of *P is "<<*p<<endl;
cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}