#include<iostream>
using namespace std;

unsigned long long fib(int n){

    if(n <= 1){
        return n;
    }


    return fib(n-1) + fib(n-2);
}


int main(){

    cout<<fib(6);
    return 0;
}