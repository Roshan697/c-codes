#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> cars;

    cars.push("volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");


    cars.front() = "tesla";
    cars.back() = "VW";
    
    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;
    cout<<cars.size();



}