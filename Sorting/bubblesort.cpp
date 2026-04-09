#include<iostream>
// #include<utility>
using namespace std;
void bubbleSort(int *arr,int n){
    bool isSwap=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            //agar swap ek iteration m nhi hua then array is sorted
            return;
        }
    }
    
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[5]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
}