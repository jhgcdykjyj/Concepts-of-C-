// Classes and objects
// C++ ---> initially called ---> C with classes by stroustroup
// class ---> extension of structures (in C)
// structure had limitations
// -members are public
// -no methods
// Classes ---> structures + more
// classes ---> can have methods and properties
// Classes ---> can make few private & public members
// structures in C++ are typdeaf
// you can declare objects along with the class declaration like this:
/*class Employee{
    Class defination
} harry, rohan, lavish;*/
// harry.salary = 8 marks no sense if salary is private

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment();
    void display();
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary formats" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "The dispaly your binary nuber" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{

    // Nesting of member function

    binary b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.display();

    return 0;
}