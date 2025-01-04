#include<iostream>
#include<vector>
using namespace std;


void display(vector<int> &v){
        for(int i = 0; i < v.size() ; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    

    
    vector<int> vec1;
    int ele,size;
    cout<<"enter the size of the element:"<<endl;
    cin>>size;
    for(int i = 0; i<size; i++){
        cout<<"enter element to add: ";
       
        cin>>ele;
        vec1.push_back(ele);
        

    }

    //vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter,566);

    display(vec1);
    return 0;
}
