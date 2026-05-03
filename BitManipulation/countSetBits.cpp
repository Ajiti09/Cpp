#include<iostream>
using namespace std;
int countSetBit(int num){
    int count =0;
    while(num>0){
        if(num&1){
            count +=1;
        }else{
            count +=0;
        }
        num=(num>>1);
        cout<<num<<"\n";
    }
    return count;
}
int main(){
    cout<<"No. of set bits ="<<countSetBit(10);
}