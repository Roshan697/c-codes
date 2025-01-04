#include<iostream>

using namespace std;

class Myclass{
    public:
      int myNum;
      string myString;

};

int main(){
    Myclass obj;

    obj.myNum = 15;
    obj.myString = "Some text";

    cout<<obj.myNum<<endl;
    cout<<obj.myString<<endl;
    return 0;
}