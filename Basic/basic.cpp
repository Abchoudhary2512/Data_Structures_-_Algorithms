#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<"result is "<<sum(x,y)<<endl;
    return 0;
}