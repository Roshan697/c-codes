#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<string> cars = {"BMW","Volvo","Toyota","Honda"};

    //ADD VECTOR ELEMENTS
    // cars.push_back("Tesla");
    // cars.push_back("BYD");

    // for(string items : cars){
    //     cout<<items<<endl;
    // }
    
    //REMOVING ELEMENTS FROM THE VECTOR
    // cars.pop_back();

    // for(string items : cars){
    //     cout<<items<<endl;
    // }
    
    //VECTOR SIZE
    //cout<<"cars size is: "<<cars.size()<<endl;

    //checking if the vector is empty or not
//     cout<<cars.empty()<<endl; /*output = 1 if the vector
//                                      is empty 
//                           output = 0 if the vector
//                           is not empty           */

//    vector<string> item = {};
//    cout<<item.empty()<<endl;  

   //LOOPING THROUGH THE VECTOR
   for(int i = 0; i<cars.size(); i++){
    cout<<cars[i]<<endl;
   }                     

}