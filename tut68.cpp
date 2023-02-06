#include<iostream>
using namespace std;

template <class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data = a;
    }
    void display();
};

template<class T>
void Harry<T>:: display(){
    cout<<data;
};

void func(int a){
    cout<<"I am first func() "<<a<<endl;
};

template <class T>
void func(T a){
    cout<<"This is templatised func() "<<a<<endl;
};

template <class T>
void func1(T a){
    cout<<"This is templatised func() "<<a<<endl;
};

    //cout<<h.data;
    //h.display();

int main(){
    //Harry<float> h(5.4);
    //Harry<char> h('c');
    func(4); // Exact match takes the highest priority.
    func1(4);
    return 0;
}