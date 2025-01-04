#include<iostream>
using namespace std;

class Myclass{         //the class
    public:            //access specifier
      void myMethod(){  //method/function defined inside the class
        cout<<"hi"<<endl;
      }
};

int main(){
    Myclass myobj;    //create an object of myClass 
    myobj.myMethod(); //call the method
    return 0;

}

