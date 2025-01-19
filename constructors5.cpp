#include<iostream>
using namespace std;

/*COPY CONSTRUCTORS: */
class Number{
    int a = 0;
    public:
        Number(){}
        Number(int num){
           a = num;
        } 

        void display(){
            cout<<"the number for this object is "<<a<<endl;
        }
};

int main(){
    Number x(45),y,z;
    x.display();
    y.display();
    z.display();
    /*z1 should exactly resemble as z*/

}