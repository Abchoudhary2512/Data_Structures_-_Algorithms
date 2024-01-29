#include<bits/stdc++.h>
using namespace std;
 int main(){
    list<int>ls;
    ls.push_back(2);
    for(auto it = ls.begin();it != ls.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;

 }