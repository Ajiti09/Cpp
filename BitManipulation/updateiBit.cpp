#include<iostream>
using namespace std;
void updateBit(int num,int i,int val){
    num = num& ~(1<<i);//clear the bit
    num = num | (val<<i);
    cout<<num<<endl;
}
int main(){
    updateBit(7,2,0);
}