#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> cars;
    cars.push("volvo");
    cars.push("BMW");
    cars.push("AUDI");


    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;
}