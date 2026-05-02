#include<iostream>
using namespace std;
void powOf2(int num){
    if(!(num & (num-1))){
        cout<<num<<" is pow of 2"<<"\n";
    }else{
        cout<<num<<" is not power of 2";
    }
}
int main(){
    powOf2(4);
    powOf2(6);
}