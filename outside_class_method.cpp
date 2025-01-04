#include<iostream>
using namespace std;

class Myclass{
    public:
      void mymethod();

};

void Myclass::mymethod(){
    cout<<"Hello world"<<endl; /*method/function
                                    defined outside the
                                    class*/
}

int main(){
    Myclass myObj;
    myObj.mymethod();
    return 0;
}