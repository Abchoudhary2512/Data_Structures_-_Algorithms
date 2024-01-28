// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<2*n-1;i++){
//         if(i<=n){
//             for(int j=0;j<i;j++){
//                 cout<<"*";
//             }
//         }
//         if(i>n){
//             for(int j=n-1;j>1;j--){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=4;i>=0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}