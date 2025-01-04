#include<iostream>

using namespace std;

//call by value
int sum(int a, int b){
    int c = a+b;
    return c;
}

//call by reference using pointers 
void swapPointer(int *a, int *b){ //temp a b
    int temp = *a;        /* 4   4 5
                             4   5 5*/
    *a = *b;              /* 4   5 4*/
    *b = temp;
}

//call by reference using c++ reference variables
void swapReferencVar(int &a ,int &b){
    int temp = a;
    a = b;
    b = temp;
}

//Return by reference using reference variables
int swapReferencevar2(int &a, int &b){
    int temp = a;
    a = b;
}


int main(){
    int a = 4,b = 5;
    //cout<<"the sum is : "<<sum(a,b)<<endl;
    // swapPointer(&a,&b); /*this will swap a and b using pointer reference*/
    swapReferencVar(a , b); /*this will swap a and b using reference variables*/
    cout<<"the value fo a is: "<<a <<" the value of b is: "<<b<<endl;
   
    return 0;
} 