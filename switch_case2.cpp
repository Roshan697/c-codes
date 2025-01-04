#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age";
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"you are 18\n";
        break;
    
    case 22:
      cout<<"you are 22\n";
      break;
    default:
       cout<<"no special cases";
        break;
    }
    cout<<"Done with switch case";
}