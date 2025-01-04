#include<iostream>

using namespace std;

//pointer --> datatype which holds the address of other datatypes
int main(){
    int a = 3;

    int *b = &a; //&-->address of operator
    cout<<"address of a is: "<<b<<endl;
    cout<<"the address of a is: "<<&a<<endl;
    cout<<"value at address b is: " <<*b<<endl;  
               //*-->derefrence operator


       //pointer to pointer variable
       int **c = &b;
       cout<<"the address of b is: "<<&b<<endl;
       cout<<"the address of b is: "<<c<<endl;
       cout<<"the value at address c is"<<*c<<endl;
       cout<<"the vlaue at address value_at(value_at(c)) is: "<<**c<<endl;



       return 0;            
}