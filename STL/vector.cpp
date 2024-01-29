#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
   for(auto it = v.begin();it != v.end();it++){
    cout<<*(it)<<" ";
   }
   cout<<endl;
   vector<int>v1(3,2);

     for(auto it = v1.begin();it != v1.end();it++){
    cout<<*(it)<<" ";
   }

   cout<<endl;
   vector<pair<int,int>>p = {{1,2},{2,3}};
   p.pop_back();
    for (auto it = p.begin(); it != p.end(); it++) {
        cout << it->first << ", " << it->second << endl;
    }

    cout<<p.size();
}