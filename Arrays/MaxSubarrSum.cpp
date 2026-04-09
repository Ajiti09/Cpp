#include<iostream>
#include<climits>
//Brute Force
using namespace std;
void printSubarr(int*arr,int n){
    int maxSum = INT_MIN;
    for(int start=0;start<n;start++){
    for(int end=start;end<n;end++){
        int sum=0;
        //cout<<"("<<start<<","<<end<<")";
        for(int i=start;i<=end;i++){
            //cout<<arr[i];
            sum+=arr[i];
            
        }
        cout<<sum<<",";
        maxSum=max(maxSum,sum);
    }
    cout<<endl;
   } 
   cout<<"Maximum Subarray Sum is "<<maxSum<<endl;
}
//Slightly Optimized
void maxSumSubarr(int*arr,int n){
    int maxSum = INT_MIN;
    for(int start=0;start<n;start++){
        int sum=0;
        for(int end=start;end<
            n;end++){
            sum+=arr[end];
            maxSum=max(maxSum,sum);
    }
   } 
   cout<<"Maximum Subarray Sum is "<<maxSum<<endl;
}
//Kadane's Algo
void maxSumSubarr2(int*arr,int n){
    int maxSum = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
        maxSum=max(maxSum,sum);
        if(sum<0){
            sum=0;
        }
    }
   cout<<"Maximum Subarray Sum is "<<maxSum<<endl;
}
int main(){
   int arr[]={2,-3,6,-5,4,2};
   int n=sizeof(arr)/sizeof(int);
   //printSubarr(arr,n);
    // maxSumSubarr(arr,n);
    maxSumSubarr2 (arr,n);
}