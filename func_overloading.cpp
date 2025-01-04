#include<iostream>
using namespace  std;

int add(int a, int b){
    cout<<"using function with two arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}

//calculate the volume of the cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

//calculating the volume of the cube
int volume(int a){
    return a*a*a;
}

//calculating vol of cuboid
int volume(int l, int b, int h)
{
    return(l*b*h);
}

int main(){

    cout<<"the sum of 3 and 6 is: "<<add(3,6)<<endl;
    cout<<"the sum of 5,5,5 is: "<<add(5,5,5)<<endl;
    cout<<"the volume of cuboid: "<<volume(2,3,4)<<" cubic units"<<endl;
    cout<<"vol cylinder is: "<<volume(3,4)<<" cubic units"<<endl;
    cout<<"vol of cube is: "<<volume(2)<<endl; 
}