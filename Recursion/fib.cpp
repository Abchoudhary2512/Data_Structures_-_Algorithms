#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n<=1 && n>0){
        return n;
    }
    return fun(n-1) + fun(n-2);

}

int main(){
    int n;
    cin>>n;
    fun(n);
    cout<< "the fib number is "<<fun(n);
    return 0;

}

