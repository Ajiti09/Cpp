#include<iostream>
#include<climits>
using namespace std;
void trappingRainwater(int *arr,int n){
    int left_max[7],right_max[7];
    left_max[0]=arr[0];
    right_max[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        left_max[i]=max(left_max[i-1],arr[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        right_max[i]=max(right_max[i+1],arr[i+1]);
    }
    int waterTrapped =0;
    for(int i=0;i<n;i++){
        int currWater=min(left_max[i],right_max[i]) - arr[i];
        if(currWater>0){
            waterTrapped += currWater;
        }       
    }
    cout<<"Water in each bar="<<waterTrapped;  
}
int main(){
    int heights[]={4,2,0,6,3,2,5};
    int n=sizeof(heights)/sizeof(int);
    trappingRainwater(heights,n);
}