#include<iostream>
using namespace std;
// int main(){
//     int arr[5]={5 ,4 ,3 ,9 ,12};
//     int max = arr[0];
//     int i=0;
//     while(i<5){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         i++;
//     }
//     cout<<"Largest in array :"<<max;


    //Arrays r passed by reference

    void printArr(int nums[],int m){
        
        for(int i =0;i<m;i++){
            cout<<nums[i]<<"\n";
        }
    }
    int main(){
    int arr[5]={5 ,4 ,3 ,9 ,12};
    int n=sizeof(arr)/sizeof(int);
    printArr(arr,n);
}
