#include<iostream>
using namespace std;
// int linearSea(int *arr,int n,int target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
int search(int *arr,int si,int ei,int tar){
    if(si>ei){
        return -1;
    }
    int mid=si+(ei-si)/2;
    if(arr[mid]==tar){
        return mid;
    }
    if(arr[si]<=arr[mid]){
        if(arr[si]<=tar && tar<=arr[mid]){
            search(arr,si,mid-1,tar);
        }else{
            search(arr,mid+1,ei,tar);
        }
    }else{
        if(arr[mid]<=tar && tar<=arr[ei]){
            search(arr,mid+1,ei,tar);
        }else{
            search(arr,si,mid-1,tar);
        }
    }

}
int main(){
    int arr[]={4,5,6,7,0,1,2};

    // cout<<linearSea(arr,7,0);
    cout<<search(arr,0,7,0);
}