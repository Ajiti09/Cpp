#include<iostream>
#include<vector>
using namespace std;
int isOccur(vector <int> vec,int target,int i){
    int n=vec.size();
    if(i == n){
        cout<<"target doesn't exists"<<"\n";
        return -1;
        
    }
    else if(vec[i]==target){
        cout<<"target exists in "<<i<<"\n";
       return true;
    }
    isOccur(vec,target,i+1);
}
int main(){
    vector <int> vec={1,2,3,3,4};
    isOccur(vec,4,0);
}