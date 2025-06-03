#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> cars;
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");

    cars.pop();

    
        cout<<cars.top()<<endl;
        cout<<"size: "<<cars.size()<<endl;
        cout<<cars.empty()<<endl;
       
    
}