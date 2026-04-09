#include<iostream>
using namespace std;
// int binarySearch(int*arr,int n,int key){
//     int start=0,end=n-1;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={2,4,6,8,10,12,14,16};
//     int n=sizeof(arr)/sizeof(int);
//     int key=7;
//     int index=binarySearch(arr,n,key);
//     cout<<"key "<<key<<" found in "<<index+1<<" position"<<endl;
// }

//POINTER ARITHMATIC

// void printarr(int*ptr,int n){
//     for(int i=0;i<n;i++){
//         cout<< *(ptr+i)<< ",";
//     }
// }


// int main(){
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(int);
//     printarr(arr,n);

// }


int main(){
    int a=5;
    int*ptr1=&a;
    int *ptr2=ptr1 +3;


    cout<<ptr2<<"\n";
    cout<<ptr1<<"\n";

    cout<<ptr2 - ptr1;
}