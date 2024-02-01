#include <bits/stdc++.h>
using namespace std;

//parametrized recursion function

// void fun(int n, int sum)
// {
//     if (n < 0)
//     {
//         cout << "sum is" << sum;
//         return;
//     }
//     fun(n - 1, sum + n);
// }

// int main()
// {
//     int sum=0;
//     int n;
//     cin >> n;
//     fun(n,sum);
//     return 0;
// }

//Functional recursion component
int ret(int n){
    if(n<0) return 0;
    return ret(n-1) + n;
}
int main(){
    int n;
    cin>>n;
    cout<<"the sum is "<< ret(n);
    //ret(n);
    return 0;

}