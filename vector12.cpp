#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    for(int i = 0;  i <5; i++){
        int ele;
        cout<<"Enter element: ";
        cin>>ele;
        v.push_back(ele);

    }
    for(int j = 0; j<v.size(); j++){
        cout<<v[j]<<" ";

    }

    
}

