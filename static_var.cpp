#include<iostream>
using namespace std;
void demo(){
    static int count = 0;
    ++count;
    cout<<"count is: "<<count<<endl;
    
}

int main(){
    for(int i = 0; i <5;i++){
        demo();
    }

    
}