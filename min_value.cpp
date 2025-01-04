#include<iostream>
using namespace std;

int main(){
    int arr[] = {7, 12, 9, 4, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int minVal = arr[0];

    for(int i = 0; i < size ; i ++){
        if(arr[i]<minVal){
            minVal = arr[i];
        }
    }
    cout<<"minimum value is: "<<minVal<<endl;


}