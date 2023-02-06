#include<iostream>
using namespace std;

int main(){
    //cout<<"This is tutorial 9";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    // // *****SELECTION CONTROL STRUCTURE (If, else if, if)*****
    // if((age<18) && (age>0)){
    // cout<<"You cannot come to my party"<<endl;
    // }
    // else if (age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"Your are not yet born"<<endl;
    // }
    // else {
    //     cout<<"You can come to the party"<<endl;
    // }


    //  SELECTION CONTROL STRUCTURE (Switch case statements)
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
         cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special case"<<endl;
        break;
    }
    cout<<"Done with switch case";

        return 0;
    
}