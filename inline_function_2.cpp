#include<iostream>

using namespace std;
inline int add(int a, int b){
    return a + b;
}

int main(){
    int a = 2, b = 3;
    
    cout<<"sum: "<<add(a,b)<<endl;
}