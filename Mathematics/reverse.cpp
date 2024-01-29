#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =123;
    int rn=0;
    int ld =0;
    while(n>0){
        ld = n%10;
        n = n/10;
        rn = (rn*10) + ld;
    }
    cout<<"the reverse of the number is "<<rn<<endl;
    return 0;
}