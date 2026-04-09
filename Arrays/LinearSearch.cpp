#include<iostream>
using namespace std;
int linearSea(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
        return -1;

}
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    int key=14;
    int foundindex=linearSea(arr,n,key);
    cout<<"Key "<<key<<" found in "<< foundindex<<" position"<<endl;
}