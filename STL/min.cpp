#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v =  {1,2,3,4};
    cout<<"the minimum element is "<<*(min_element(v.begin(),v.end()));
    cout<<endl;
    cout<<"the maximum element is "<<*(max_element(v.begin(),v.end()));

    return 0;
}