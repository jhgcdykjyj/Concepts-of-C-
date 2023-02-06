#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;

};

/*
                                   INHERITANCE CHART

                       Public Derivation   Private Derivation  Protected Derivation  
    1.private members      Not Inherited   Not inherited       Not inherited
    2.protected members    Protected       Private             Protected
    3.public members       Public          Private             Protected
*/
class Derived: protected Base{


};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; Will not work as a is protected in both base asa well as derived class
    return 0;
}