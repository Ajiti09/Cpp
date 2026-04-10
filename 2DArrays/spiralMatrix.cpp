#include<iostream>
using namespace std;
void spiralMat(int arr[][5],int n ,int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    while(srow<=erow && scol<=ecol){
        //top
    for(int j=scol;j<=ecol;j++){
        cout<<arr[srow][j]<<" ";
    }
    //right
    for(int i=srow+1;i<=erow;i++){
        cout<<arr[i][ecol]<<" ";
    }
    //bottom
     for(int j=ecol-1;j>=scol;j--){
        if(srow==erow){
            break;
        }
        cout<<arr[erow][j]<<" ";
    }
    //left
     for(int i=erow-1;i>=srow+1;i--){
        if(scol == ecol){
            break;
        }
        cout<<arr[i][scol]<<" ";
    }
    srow++; scol++;
    erow--;ecol--;
}
}
int main(){
    // int arr[4][4]={{1,2,3,4},
    //                 {5,6,7,8},
    //                 {9,10,11,12},
    //                 {13,14,15,16}};
    // spiralMat(arr,4,4);

    // int arr3[3][3]={{1,2,3},
    //                  {5,6,7},
    //                  {9,10,11}};
    // spiralMat(arr3,3,3);

    //int arr4[2][6]={{1,2,3,4,5,6},
    //                 {7,8,9,10,11,12}};
    //spiralMat(arr4,2,6);


    //srow = erow for bottom and scol ==ecol for left will prevent an printing duplicate
      int arr2[3][5]={{1,2,3,4,5},
                      {14,6,7,8,9},
                      {15,10,11,12,13}};
      spiralMat(arr2,3,5);

    // int arr2[3][4]={{1,2,3,4},
    //                 {5,6,7,8},
    //                 {9,10,11,12}};
    // spiralMat(arr2,3,4);
}