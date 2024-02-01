#include<bits/stdc++.h>
using namespace std;
int count = 0;
void print(){   
     int count = 0;
    if(count == 4) return ;
    count++;
    cout<<"the count is"<<count<<endl;
    print();
}


int main(){
    print();
    return 0;
}