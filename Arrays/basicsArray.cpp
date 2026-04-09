#include<iostream>
using namespace std;
int main(){
    // int arr[5];
    // cout<<arr[0]<<endl;//garbage value
    // cout<<arr[1]<<endl;//garbage value
    // cout<<arr[0]<<endl;//garbage value

    // int arr[10]={1,2,3,4,5};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[6]<<endl; //surity k saath 0
    // cout<<arr[7]<<endl;//surity l saath 0
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(arr)/sizeof(int);
    
    //output the array using loop
    // int n=sizeof(arr)/sizeof(int);
    // for(int i =0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    //input the array using loop
    int n;
    cout<<"enter lenght of array:";
    cin>>n;
    int arr[n];
    // int n=sizeof(arr)/sizeof(int);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

}