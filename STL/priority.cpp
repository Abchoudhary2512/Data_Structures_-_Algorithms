#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(2);
    pq.emplace(3);
    cout<<pq.top();
}