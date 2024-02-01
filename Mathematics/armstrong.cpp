#include<bits/stdc++.h>
using namespace std;

int cube(int x){
    return x*x*x;
}

int main(){
    int ld=0;
    int sum = 0;
    int originalN = 371; // Save the original number
    int n = originalN;
    
    while(n>0){
        ld = n%10;
        n= n/10;
        sum = sum + cube(ld);
    }
    
    if(sum == originalN){ // Compare with the original number
        cout << "This is an Armstrong number" << endl;
    }
    else{
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}
