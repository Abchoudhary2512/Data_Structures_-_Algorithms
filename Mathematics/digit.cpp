#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ld =0;
    int n = 1234567890;
    vector<int>v;
    while(n>0){
        ld = n%10;
    v.push_back(ld);
        n = n/10;

    }
    for(auto it = v.end()-1;it != v.begin();it--){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<"the count of digit is "<<v.size();
    return 0;

}