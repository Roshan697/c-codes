#include<iostream>
using namespace std;


    /*Constructor is a special memeber function
    with same name as of the class. It is used 
    to initialize the objects of its class.
    it is automatically invoked whenever is object
    is created*/

/*class Myclass{
    public:
      Myclass(){
        cout<<"hi"<<endl;
      }
};

int main(){
    Myclass obj;
    return 0; 
}*/

class Car{
    public:
      string brand;
      string model;
      int year;

      Car(string x, string y, int z){
         brand = x;
         model = y;
         year = z;
      }
};

int main(){
    Car obj("BMW","M4",2017);
    cout<<obj.brand<<" "<<obj.model<<endl;
}
  