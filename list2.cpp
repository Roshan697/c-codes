#include<iostream>
#include<list>
using namespace std;

int main(){
  list<string> cars = {"Volvo","BMW","Ford","Mazda"};

   for(string items: cars){
    cout<<items<<endl;
}
}

