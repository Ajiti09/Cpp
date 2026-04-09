#include<iostream>
using namespace std;
//pass by reference using pointer
// void changeA(int*ptr){
//     *ptr = 20;
//     cout<<*ptr<<"\n";
// }
//pass by reference using reference variable
void changeA(int &b){
    b = 20;
    cout<<b<<"\n";
}
//pass by value
// void change(int a){
//     a=20;
//     cout<<a<<"\n";
// }
int main(){
    int a = 10;
    // int &b = a;  // always initialize reference variable
    // b=25;
    changeA(a);
    // cout<<b<<endl;
    cout<<a<<endl;
}