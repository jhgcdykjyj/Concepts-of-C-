
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 using a utility
       function and performs +, -, *, /
    2. ScientificCalculator - Takes input of 2 numbers using utility
       function and performs any four scientific operation of your choice

Create another class Hybridcalculator and inheritance it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. What mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and
        scientific calculator.
    Q4. how is code reuseability implemented?
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void setdata()
    {
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }

    void getdata()
    {
        cout << "The value of a + b is " << a + b << endl;
        cout << "The value of a - b is " << a - b << endl;
        cout << "The value of a * b is " << a * b << endl;
        cout << "The value of a / b is " << a / b << endl;
    }
};

class ScientificCalculator
{
protected:
    int a, b;

public:
    void setdata(){
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }

    void getdata()
    {
        cout << "The value of cos (a) is " << cos (a) << endl;
        cout << "The value of sin (b) is " << sin (b) << endl;
        cout << "The value of exp (a) is " << exp (a) << endl;
        cout << "The value of tan (b) is " << tan (b) << endl;
    }
};

class Hybridcalculator: public SimpleCalculator, public ScientificCalculator
{
protected:
    int a, b;

public:
    void setdata(){
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }

    void getdata()
    {
        cout << "The value of cos (a) + sin(b) is " << cos (a) + sin(b) << endl;
        cout << "The value of sin (b) - cos (a) is " << sin (b) - cos (a) << endl;
        cout << "The value of exp (a) * log (b) is " << exp (a) * log (b) << endl;
        cout << "The value of tan (b) / cot (a) is " << tan (b) / tan (a) << endl;
    }
};
int main()
{
    SimpleCalculator calc;
    calc.setdata();
    calc.getdata();
    ScientificCalculator calcu;
    calcu.setdata();
    calcu.getdata();
    Hybridcalculator harcu;
    harcu.setdata();
    harcu.getdata();


    return 0;
}
