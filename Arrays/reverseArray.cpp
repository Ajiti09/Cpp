#include<iostream>
using namespace std;
//With Extra Space
void copyArr(int arr[],int n){
    int copyArr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyArr[j]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyArr[i];
    }
}
//Without Extra Space
void copyarr(int *arr,int n){
    int start = 0; int end = n-1;
    while(start<end){
        //swap
        
        // int temp =arr[start];
        // arr[start]=arr[end];
        // arr[end] =temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(int);
    //copyArr(arr,n);
    copyarr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

}