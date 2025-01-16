#include<iostream>
using namespace std;

/*constructors: special method that is 
automatically called when an object is instantiated
useful for assigning values to attributes as arguments*/

class Student{
    public:
      string name;
      int age;
      double gpa;
    Student(string x, int y, double z){
          name = x;
          age = y;
          gpa = z;

    }  

};

class Car{
  public:
    string make;
    string model;
    int year;
    string color;

    Car(string a, string b, int c, string d){
        make = a;
        model = b;
        year = c;
        color = d;
    }
};


int main(){

    Car c1("Tata","Safari",2024,"black")
    Student st1("Spongebob",25,4.5);
    Student st2("Patrick",40,5.0);
    cout<<st1.name<<endl;
    cout<<st1.age<<endl;

    cout<<st2.name<<endl;
    cout<<st2.age<<endl;
    
}