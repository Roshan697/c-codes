#include<iostream>
using namespace std;

int a[100],size,i;

int main(){
    int a[100], size,i;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    for(i = 0; i<size; i++){
        cout<<a[i]<<endl;
    }

}