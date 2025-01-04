#include<iostream>
using namespace std;

unsigned long long factorial(int num){

    if(num == 1){
        return 1;
    }
    return num*factorial(num-1);

}

int main(){
    cout<<factorial(1);
    return 0;
}