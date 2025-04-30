#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> numbers;
    int value;
    for(int i = 0;i<3;i++){
          cout<<"Enter a value: "<<endl;
          cin>>value;
          numbers.push_back(value);
          
          
    }
    cout<<numbers[1]<<endl;
    cout<<"size of numbers: "<<numbers.size()<<endl;
    cout<<"capacity: "<<numbers.capacity()<<endl;
    return 0;
    

    

} 