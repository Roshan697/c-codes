#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> v){
    cout<<"displaying this vector:"<<endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}



int main(){
    vector<int> vec1; //zero length vector
    vector<char> vec2(4); //4 element vector
    vector<char> vec3(vec2); //4 element character vector from vec2
    vector<int> vec4(6,13);
    vec2.push_back('h');
    display(vec4);
    cout<<vec4.size();
    
   


    int ele;
    int size;
    // cout<<"Enter the size of the vector: "<<endl;
    // cin>>size;
    // for(int i = 0; i<size; i++){

    //     cout<<"Enter an element to add to this vector: "<<endl;
    //     cin>>ele;
    //     vec1.push_back(ele);
    // }

    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,500, 566);
    // display(vec1);
     return 0;
}