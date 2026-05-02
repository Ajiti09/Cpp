#include<iostream>
using namespace std;
int getiBit(int num, int i){
    int bitMask=1<<i;
    if(!(bitMask & num)){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    cout<<getiBit(6,2)<<endl;
}