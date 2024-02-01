#include<bits/stdc++.h>
using namespace std;
void fun(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    fun(i+1,arr,n);

}

int main(){
    int arr[4] = {1,2,3,4};
    fun(0,arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}