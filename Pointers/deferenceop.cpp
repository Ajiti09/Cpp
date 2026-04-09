#include<iostream>
using namespace std;
int main(){
    int a = 10;
    // cout<<*(&a)<<"\n";
    // int *ptr =&a;
    // cout<<*ptr<<"\n";
    // *ptr = 20; // updation of a 
    // cout<<*ptr<<"\n";
    int* ptr1 = NULL;
    cout<< ptr1<<"\n";
    cout<<*ptr1<<"\n";//segmentation fault
}