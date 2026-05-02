#include<iostream>
#include<vector>
using namespace std;
void pairSum(vector <int> vec){
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            // cout<<"("<<vec[i]<<","<<vec[j]<<")";
            if(vec[i]+vec[j]==9){
                cout<<" (sum=9) Target found"<<endl;
                cout<<"index="<<i<<","<<j;
            }         
         }
        // cout<<endl;
    }
    
}
vector <int>  pairSum2(vector <int> vec,int target){
    int currSum=0;
    int start=0;
    int end=vec.size()-1;
    vector <int> ans;
    while(start<end){
        currSum=vec[start]+vec[end];
        //cout<<"Current Sum="<<currSum<<endl;
        if(currSum == target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }else if(currSum>target){
            end--;
        }else{
            start++;
        }
    }
    return ans;
}
int main(){
    vector <int> vec={2,7,11,15};
    int target;
    cout<<"Enter target :";
    cin>>target;
    vector <int> ans=pairSum2(vec,target);
    cout<<ans[0]<<","<<ans[1];

}