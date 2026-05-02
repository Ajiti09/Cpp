#include<iostream>
using namespace std;
int setiBit(int num, int i){
    int bitMask=1<<i;
    return(bitMask | num);

}
int main(){
    cout<<setiBit(6,3);
}