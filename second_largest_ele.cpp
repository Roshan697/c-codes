#include<iostream>
using namespace std;


int main(){
    int arr[] = {2,3,1,9,5,4,7};
    int size = 7;

    int largest = arr[0];
    int sec_lar = arr[0];

    for(int i = 0; i<size; i++){
        if(arr[i]>largest){
            sec_lar = largest;
            largest = arr[i];

        }
        else if(arr[i] > sec_lar && arr[i] != largest){
            sec_lar = arr[i];
        }
    }
    if(largest == sec_lar){
        cout<<"There is no distinct second largest element : "<<endl;
    }

    else{
        cout<<"The second largest element is : "<<sec_lar<<endl;
    }

    return 0;
}