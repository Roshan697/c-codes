#include<iostream>
#include<list>
using namespace std;

int main(){
    list<string> cars = {"Volvo","BMW","Ford","Mazda"};
    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;
}