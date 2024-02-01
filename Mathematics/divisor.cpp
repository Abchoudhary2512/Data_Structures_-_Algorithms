#include<bits/stdc++.h>
using namespace std;
void printDiv(int x){
    for(int i=1;i<x;i++){
        if(x%i==0){
            cout<<"the divisors are"<<i<<" ";
        }
    }
}

int main(){
    printDiv(7);
    return 0;
}