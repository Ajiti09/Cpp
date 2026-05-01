#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char string[10];
    cin>>string;
    int n=strlen(string);
    for(int i=0;i<n;i++){
        char ch=string[i];
        if(ch>='A'&& ch<='Z'){
            continue;
        }else{
            string[i]=ch - 'a'+'A';
        }
    }
    cout<<string<<endl;
}