#include<bits/stdc++.h>
using namespace std;
int main(){
    int p = 11;
    int ld =0;
    int rn=p;
    while(p>0){
        ld = p%10;
       
        rn = (rn*10 )+ ld;
         p = p/10;
    }
    cout<<"the value of rn"<<rn<<endl;
    if(abs(rn-p) != 0){
        cout<<"it is not palindrome "<<endl;

    }
    else{
        cout<<"a plaindrome"<<endl;
    }
}