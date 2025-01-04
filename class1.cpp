#include<iostream>
#include<string>

using namespace std;

class Teacher{
private:
  double salary;

public: 
     //properties// attributes
    string name;
    string dept;
    string subject;
    
    //setter function
    void setsal(double s){
        salary = s;
    }
    
    //getter
    double getsal(){
        return salary;
    }
   
    
    //methods
    void changedept(string newdept){
        dept = newdept;

    }
};

class student{
public:
   string name;
   int roll;
   int age;
};

int main(){
    Teacher t1;
    t1.name = "Roshan";
    t1.subject = "C++";
    t1.changedept("Java");
    t1.setsal(45000);
    cout<<t1.dept<<endl;
    cout<<t1.name<<endl;
    cout<<t1.getsal()<<endl;

    
    return 0;

}