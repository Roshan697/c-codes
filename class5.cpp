#include<iostream>
using namespace std;

class MyClass{
    public:
       int myNum;
       string myString;
};

int main(){
    MyClass obj;
    string mystring;

    obj.myNum = 15;
    obj.myString = "Some text";

    cout<<obj.myNum<<endl;
    cout<<obj.myString<<endl;
    return 0;
}