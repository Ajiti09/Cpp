#include<iostream>
using namespace std;
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
int main(){
    int arr[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    int key,row,column;
    cout<<"enter key:";
    cin>>key;
    search(arr,4,4,key);
    
}