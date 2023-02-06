#include<iostream>
using namespace std;

// class Derived: visibility-mode base1, visibility-mode base2,
// {
//     Class body of class "Derived"
// }

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int a){
            base3int = a;
        }
};

class Derived : public Base1, public Base2, public Base3{
    public:
        void show(){
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The value of Base3 is "<<base3int<<endl;
            cout<<"The sum of both is "<<base1int+base2int+base3int<<endl;
        }
};

/*
The inherited derived class will look something like this:
    base1int --> protected
    base2int --> protected
Member function:
    set-base1int()--> public
    set-base2int()--> public
    set-show()--> public

*/
int main(){
    Derived harry;
    harry.set_base1int(23);
    harry.set_base2int(5);
    harry.set_base3int(15);
    harry.show();
    return 0;
}