#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>umap;
    umap.insert({1,2});
    umap.insert({3,4});
     for (auto it = umap.begin(); it != umap.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }
}