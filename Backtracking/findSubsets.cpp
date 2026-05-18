#include<iostream>
#include<string>
using namespace std;
void findSubset(string str,string subset){
    if(str.size()==0){
        cout<<subset;
        return;
    }
    char ch=str[0];
    findSubset(str.substr(1,str.size()-1),subset+ch);
    findSubset(str.substr(1,str.size()-1),subset);
}
int main(){
    string str="abc";
    string subset=" ";
    findSubset(str,subset);
}