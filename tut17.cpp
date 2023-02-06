#include<iostream>
using namespace std;

int product(int a, int b){
    // Not recommended to use below lines with inline functions
    //static int c=0; // This executes only once
    //c = c + 1; // Next time when this function will run, the value of c will be retianed
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}
// int strlen(const char *p)
int main(){
     int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    //cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account,\nyou will receive "<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account,\nyou will receive "<<moneyReceived(money, 1.1)<<"Rs after 1 year";

    return 0;
}
   
