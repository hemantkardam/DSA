#include<iostream>
using namespace std;

// int print(int n,int k){
//     if(n==0){
//         return;
//     }
//     cout<<k<<" ";
//     print(n-1,k+1);
// }



// int main(){
//     int n;
//     cin>>n;

//     // int k=1;
//     // cout<<
//     print(n,1);

//     return 0;
// }

int func(int n){
    if(n==0){
        return 0;
    }
    return func(n/2)+func(n/4);
}

int main(){
    int n;
    cin>>n;
    cout<<func(5);

    return 0;
}