#include<iostream>

using namespace std;

/*factorial of a number*/
//n! = n*(n-1)
int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);

    }
}

int main(){

    int num = 5;
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;

    return 0;
}