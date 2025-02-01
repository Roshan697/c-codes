#include<iostream>
#include<vector>
#include<string>
using namespace std;

//creating vectors
//syntax - (vector<type> vector_name)
int main(){
      
      vector<string> Cars = {"Porsche","Ferrari","Mercedes"};

      for(string items: Cars){
      cout<<items<<endl;
}
}
