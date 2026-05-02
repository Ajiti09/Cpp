#include<iostream>
using namespace std;
int clearBit(int num,int i){
    int bitMask=~(1<<i);
    return(num&bitMask);

}
int main(){
    cout<<clearBit(6,1);
}