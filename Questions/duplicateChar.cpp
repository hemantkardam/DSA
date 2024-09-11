#include<iostream>
using namespace std;

int check(char *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                // cout<<i<<endl;
                return i;
            }
        }
    }
}

int main(){
    char arr[]={'f','d','a','e','s'};
    int n=sizeof(arr)/sizeof(char);
    cout<<check(arr,n);
    // return 0;
}