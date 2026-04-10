#include<iostream>
using namespace std;
//Brute Force
int search(int arr[][4],int n,int m,int key){
    bool isfound=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(key == arr[i][j]){
                cout<<"Row:"<<i;
                cout<<"Column:"<<j;
                isfound=true;
            }
        }
    }
    if(!isfound){
    cout<<"not found";}
}
//Optimized BS 
void search2(int arr[][4],int n,int m,int key){
    int srow=0,erow=n-1;  
    bool isfound=false;
    for(int i=srow;i<=erow;i++){
        int scol=0,ecol=m-1;
    while(scol<=ecol){
        int mid=(scol+ecol)/2;
        if(arr[i][mid]==key){
            cout<<"Row:"<<i;
            cout<<"Column:"<<mid;
                isfound=true;
                break;
        }
        else if(arr[i][mid]<key){
            scol=mid+1;
        }
        else{
            ecol=mid-1;
        }
    }
}
if(!isfound){
    cout<<"not found";}
}
int main(){
    int arr[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    int key,row,column;
    cout<<"enter key:";
    cin>>key;
    search2(arr,4,4,key);
    
}