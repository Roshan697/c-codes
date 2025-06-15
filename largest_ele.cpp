#include<iostream>
using namespace std;

int main(){

    int array[]={2,3,1,9,5,4,7};
    int size = 7;

    int maxele = array[0];
    int arr[7];
    for(int i = 0; i<size; i++){
        if(array[i]>maxele){
            maxele = array[i];
            
        }
       
    }
     cout<<"largest element is: "<<maxele<<endl;

     
     }

   
