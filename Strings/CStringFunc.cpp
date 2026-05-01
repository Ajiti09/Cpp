#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[15];
    // str1="Apna College"; this is giving error
    strcpy(str1,"Apna College");
    // cout<<str1<<endl;
    // char str2[5]="abc";
    // char str3[5]="abc";
    // cout<<strcmp(str2,str3);
     char str4[5]="abc";
    char str5[5]="xyz";
    cout<<strcmp(str5,str4);
}