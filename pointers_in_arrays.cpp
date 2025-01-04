#include<iostream>
using namespace std;


int main(){

    int marks[4] = {23,45,56,89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //Pointers in arrays:

    int *p = marks;
    cout<<"The value of marks is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;


}