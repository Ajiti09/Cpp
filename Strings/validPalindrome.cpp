#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char word[],int n){
    // char string[n]=word[];
    int start=0,end=n-1;
    while(start<end){
        if(word[start]!=word[end]){
            return false;
        }else{
            return true;
        }
        start++;
        end--;
    }
}
int main(){
    cout<<"Enter any word to check if its palindrome:"<<endl;
    char word[10];
    cin>>word;
    if(isPalindrome(word,strlen(word))){
        cout<<"Word is Palindrome!"<<endl;
    }
    else{
        cout<<"Word is not palindrome"<<endl;
    }
    
}