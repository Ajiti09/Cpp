#include<iostream>
#include<climits>
using namespace std;
void buySell(int *arr,int n){
    int best_buy[100000];
    best_buy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        best_buy[i]=min(best_buy[i-1],arr[i-1]);
        
    }
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int currProfit = arr[i]-best_buy[i];
        maxProfit=max(maxProfit,currProfit);
    }
    cout<<"Maximum Profit="<<maxProfit<<endl ;
}
int main(){
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);
    buySell(prices,n);
}