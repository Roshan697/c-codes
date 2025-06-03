#include<iostream>
using namespace std;
int Aglobal[3];

void Printing(int x){

    cout<<x<<endl;
}

int main(){
    int Alocal[3];

    int a;
    a = 5;
    Printing(a);



    return 0;
}