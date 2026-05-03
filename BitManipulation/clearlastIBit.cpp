#include<iostream>
using namespace std;
int clearLastBits(int num,int i){
    return(num &(~0 << i));
}
int main(){
    cout<<clearLastBits(15,2)<<endl;
}