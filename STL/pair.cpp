#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   // pair<int,int>p = {1,3};
    //cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>>p = {1,{2,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
    cout<<endl;
    pair<int,int>arr[2] = {{1,2},{3,4}};
    cout<<arr[1].second<<endl;


    return 0;

}