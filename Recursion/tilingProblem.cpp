#include<iostream>
using namespace std;
int tp(int n){
    if(n==0||n==1){
        return 1;
    }
    int ans1,ans2;
    ans1=tp(n-1);
    ans2=tp(n-2);
    return ans1+ans2;
}
int main(){
    cout<<"No. of ways through which tile can be arranged is:"<<tp(4);
}