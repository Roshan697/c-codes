#include<iostream>
using namespace std;

int main(){

    int array[] = {3,1,2,4,0,6};
    int target_sum = 5;
    int size=6;
    int arr[6];
    int triplets = 0;

    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            for(int k = j +1; k<size; k++ ){

                if(array[i]+array[j]+array[k]==target_sum){

                      arr[0] = i;
                      arr[1] = j;
                      arr[2] = k;
                      triplets++;
                      break;
                }
            }
        }
    }
   cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
 
   cout<<"Triplets: "<<triplets;
}


//[3,1,2,4,0,6]