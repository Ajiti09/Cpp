#include<iostream>
using namespace std;
void oddEven(int num){
    if((num & 1)==0){
        cout<<"even"<<"\n";
    }else{
        cout<<"odd";
    }
}
int main(){
    oddEven(5);
    oddEven(4);
}