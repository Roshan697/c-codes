#include<iostream>

using namespace std;

//function prototype
int sum(int a, int b);
void g();
 //<--function prototype
//here a and b are formal parameters
int main(){

    int num1, num2;
    cout<<"enter no.: "<<endl;
    cin>>num1;
    cout<<"enter no.: "<<endl;
    cin>>num2;
    /*num1 and num2 are actual parameters*/
    cout<<"sum: "<<sum(num1,num2)<<endl;
    g();
    
    return 0;

     
}

int sum(int a, int b){ /*Formal parameters a and b will be taking values 
                       from actual parameters num1 and num2*/
    int c = a + b;
    return c;
}

void g(){
    cout<<"hello"<<endl;
}