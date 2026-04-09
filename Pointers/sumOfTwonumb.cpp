#include<iostream>
using namespace std;
int main(){
    // int x = 4;
    // int* p=&x;
    // int y = 2;
    // int* p1=&y;
    // cout<<"sum ="<<*p +*p1<<endl;
    int x , y ;
    cout<<"Enter 2 numbers:"<<endl;
    cin>> x ; cin>> y;
    int* p=&x;
    int* p1 =&y;
    cout<<"sum ="<<*p +*p1<<endl;
}