#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;

}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;

}
// Calculate the value of a cylinder.
int volume(double r,int h){
return (3.14 * r * r * h);

}
// Calculate the value of a cube.
int volume(int a){
    return a * a * a;
}

// calucate the value of a cuboid.
int volume (int l, int b, int h){
    return (l*b*h);
}


int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The value of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The value of cylinder of 3 and 6 is "<<volume(3, 6)<<endl;
    cout<<"The value of cube of 3 is "<<volume(3)<<endl;
    return 0; 
}