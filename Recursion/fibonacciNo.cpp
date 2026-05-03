#include<iostream>
using namespace std;
int fibonacci(int num){
    if(num ==0){
        return 0;
    }else if(num==1){
        return 1;
    }
    return fibonacci(num-1)+ fibonacci(num-2);
}
int main(){
    //cout<<"fibonacci number="<<fibonacci(6)<<"\n";
    int n;
    cin>>n;
    for (int i=0;i<=n;i++){
        cout<<fibonacci(i)<<" ";
    }
}