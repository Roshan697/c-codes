#include<iostream>
//COPY CONSTRUCTORS

using namespace std;

//creating a demo class
class A{
    public:
      int x;
};

int main(){

    //creating a a1 object

    A a1;
    a1.x = 10;
    cout << "a1 x = "<<a1.x<<endl;
}