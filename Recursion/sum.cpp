#include<iostream>
using namespace std;

auto func(auto n,auto k){
    if(n==0){
        return 1;
    }
    cout<<k<<" ";
    func(n-1,k+1);
}

int func1(int n,int k){
    if(n==0 || n==1){
        return k;
    }
    return func1(n-1,k*n);
}
int main(){
    int n;
    int k=1;
    cin>>n;
    func(n,1);
    // cout<<func1(n,k);
}