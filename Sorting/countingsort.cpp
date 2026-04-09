#include<iostream>
#include<climits>
using namespace std;
void countingSort(int *arr,int n){
    int freq[10000]={0};
    int minVal=INT_MAX , maxVal=INT_MIN;
    for(int i=0;i<n;i++){
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);
    }
    //O(n)
    for(int i =0;i<n;i++){
        freq[arr[i]]++;
    }
    //O(range) = max to min
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    countingSort(arr,n);
}