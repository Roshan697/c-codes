#include<iostream>

using namespace std;

struct employee{

    int eId;
    char faChar;
    float salary;
};

int main(){
    struct employee Roshan;
    Roshan.eId = 1;
    Roshan.faChar = 'c';
    Roshan.salary = 70000000;

    cout<<Roshan.salary<<endl;

}