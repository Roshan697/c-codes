#include<iostream>
#include<vector>

using namespace std;
int main(){
    int x;

    vector<int> v;
    int ele;
    
    cout<<"Enter element you want to count occurrences: ";
    cin>>x;
    for(int i = 0; i<6 ; i++){
        cout<<"enter element: ";
        cin>>ele;
        v.push_back(ele);
    }

    int occ =  0;
    for(int i = 0; i<v.size();i++){
        if(v[i] ==x ){
            occ = occ + 1;
        }
    }
    cout<<occ<<endl;

}