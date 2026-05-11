#include<iostream>
#include <string>
using namespace std;
// string removeDup(string str,string ansStr,int i,bool map[]){
//     if(i == str.size()){
//         return ansStr;
//     }
//     if(!(map[str[i] - 'a'])){
//         map[str[i] - 'a']=true;
//         ansStr+=str[i];
//     }
    
//     return removeDup(str,ansStr,i+1,map);
// }
string removeDup(string str,string ansStr,bool map[]){
    int n=str.size();
    if(n==0){
        return ansStr;
    }
    
    if(!(map[str[n-1]- 'a'])){
        map[str[n-1] - 'a']=true;
        ansStr+=str[n-1];
    }
    str=str.substr(0,n-1);
    return removeDup(str,ansStr,map);
    
}
int main(){
    bool map[26]{};
    string str="appnnacollege";
    string ansStr=" ";
    //string final=removeDup(str, ansStr, map);
    cout<<removeDup(str, ansStr, map);
    //cout<<final;

}