#include<iostream>
#include <string>
using namespace std;
string removeDup(string str,string ansStr,int i,bool map[]){
    if(i == str.size()){
        return ansStr;
    }
    if(!(map[str[i] - 'a'])){
        map[str[i] - 'a']=true;
        ansStr+=str[i];
    }
    
    return removeDup(str,ansStr,i+1,map);
}
int main(){
    bool map[26]{};
    string str="appnnacollege";
    string ansStr=" ";
    string final=removeDup(str, ansStr, 0, map);
    cout<<final;

}