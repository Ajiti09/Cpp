#include<iostream>
#include<string>
using namespace std;
void binaryStr(int n,int lastPlace,string ans){
    if(n==0){
        cout<<ans;
        return;
    }
    if(lastPlace != 1){
        binaryStr(n-1,0,ans+"0");
        binaryStr(n-1,1,ans+"1");
    }else{
        binaryStr(n-1,0,ans+"0");
    }

}
void binaryStr1(int n,string ans){
    if(n==0){
        cout<<ans;
        return;
    }
    if(ans[ans.size()-1]!= '1'){
        binaryStr1(n-1,ans+"0");
        binaryStr1(n-1,ans+"1");
    }else{
        binaryStr1(n-1,ans+"0");
    }

}
int main(){
    string ans=" ";
    int lastPlace=0;
    int n=3;
    binaryStr1(3,ans);
}