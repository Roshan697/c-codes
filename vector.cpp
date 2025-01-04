#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*create a vector called cars that will store strings*/
    vector<string> cars = {"Porsche","ferrari","Mercedes Benz"};

    for(string items : cars){  /*printing the vector elements*/
        cout<<items<<endl;
    }

    //ACCESSING THE VECTOR ELEMENTS
    cout<<"ACCESSING THE VECTOR ELEMENTS"<<endl;
    cout<<cars[0]<<endl;
    cout<<cars[2]<<endl;

    /*using .front() and .back() functions for 
      accessing first and last elements*/

    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;  

    //CHANGING A VECTOR ELEMENT

    cars[1] = "Koenigsegg";
    cout<<cars[1]<<endl;

    for(string items: cars){
        cout<<items<<endl;
    }
    

    return 0;
}