#include<iostream>
using namespace std;
void decOrder(int num){
    if(num==0){
        return;
    }
    cout<<num<<" ";
    decOrder(num-1);
}
int main(){
    decOrder(5);
}