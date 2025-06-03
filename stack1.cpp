#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<string> cars;
   cars.push("Volvo");
   cars.push("BMW");
   cars.push("ford");
   cars.pop();
   cout<<cars.top()<<endl;
   cout<<cars.size()<<endl;
}
