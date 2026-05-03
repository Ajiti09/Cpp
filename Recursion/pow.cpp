#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n == 0){
        return 1;
    }
    return x * pow(x,n-1);
}
int pow2(int x,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow(x,n/2)*pow(x,n/2);
    }else{
        return x*pow(x,n/2)*pow(x,n/2);
    }
}
int main(){
    cout<<pow2(3,2)<<"\n";
}