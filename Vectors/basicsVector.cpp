#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector <int> vec1;
    // cout<<vec1.size()<<"\n";
    // vector <int> vec2={1,2,3,4};
    // cout<<vec2.size()<<"\n";
    // vector <int>vec3(10,-1);
    // cout<<vec3.size()<<"\n";
    // for(int i=0;i<vec3.size();i++){
    //     cout<<vec3[i]<<" ";
    // }
    vector <int> vec2={1,2,3,4};
    cout<<"Size="<<vec2.size()<<"\n";
    cout<<"Capacity="<<vec2.capacity()<<"\n";
    vec2.push_back(5);
    cout<<"Size="<<vec2.size()<<"\n";
    cout<<"Capacity="<<vec2.capacity()<<"\n";
    vec2.pop_back();
    cout<<"Size="<<vec2.size()<<"\n";
    cout<<"Capacity="<<vec2.capacity()<<"\n";
    }