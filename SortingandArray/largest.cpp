#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
int main(){
    int n;
    cout<<"the size of array is "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    {cin>>arr[i];}

    cout<<"the array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    sort(arr,arr+n);
    return arr[n-1];

}