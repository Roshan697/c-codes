#include<iostream>
using namespace std;

class Person{

    private:
      int age;

    public:
    //getter function
      int getAge(){
        return age;
      }   

    //setter function

    void setAge(int newAge){
        if(newAge >= 0){
            age = newAge;
        }

        else{
            cout<<"Invalid age!"<<endl;
        }
    }  
};

int main(){
    Person p;

    //use the setter to set the age 
    p.setAge(-25);

    //using the getter function to retrieve the age
    int personAge = p.getAge();

    cout<<"Person's age: "<<personAge<<endl;
}