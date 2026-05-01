#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[]="code";
    char work[5]="code";
    char input[]={'c','o','d','e','\0'};
    char word[10];
    // //ignore whitespace k badd wala word
    // cin>>word;
    // cout<<"word u have entered="<<word<<endl;
    // cout<<"length of word="<<strlen(word);
    char sentence[30];
    //cin.getline(sentence,30);
    // last arguement in cin.getline is delimiter;this is temporary
    cin.getline(sentence,30,'#');
    cout<<"your sentence is="<<sentence<<endl;
    cout<<"length="<<strlen(sentence);
}