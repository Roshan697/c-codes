#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"enter a number: ";
    cin>>number;
    for(int i = 1; i<= 5; i++){
        for(int j = 1; j<= i; j++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
}