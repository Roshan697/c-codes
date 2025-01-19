#include<iostream>
using namespace std;



class Pizza{
    public:
      string topping1;
      string topping2;

      Pizza(string x){
       topping1 = x;

      }
      Pizza(string x,string y){
       topping1 = x;
       topping2 = y;

      }
};
int main(){
    /*oveload constructors = multiple constructors
    with same name but different parameters allows
    for varying arguments when instantiating an
    object*/
    Pizza p1("pepperoni");
    Pizza p2("mushrooms","pepper");
    cout<<p1.topping1<<endl;
    cout<<p2.topping1<<endl;
    cout<<p2.topping2<<endl;
    return 0;

    
}