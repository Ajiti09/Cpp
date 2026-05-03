#include<iostream>
#include<vector>
using namespace std;
int isOccur(vector <int> vec,int target,int i){
    int n=vec.size();
    if(i == n){
        return -1;     
    }
    int indexfound=isOccur(vec,target,i+1);
    if(indexfound == -1){
    if(vec[i]==target){
        //cout<<"target exists in "<<i<<"\n";
       return i;
    }}
    return indexfound;
    
}
int main(){
    vector <int> vec={1,2,3,3,4};
    cout<<isOccur(vec,3,0);
}