#include<iostream>
using namespace std;
int sumNatural(int num){
    if(num==0){
        return 0;
    }
    int count = num + sumNatural(num-1);
    return count;
}
int main(){
 cout<<"Sum ="<<sumNatural(5);
}