#include<iostream>
#include<climits>
using namespace std;


int LargestArr(int *arr,int n){
    int max=arr[0];
    int sm=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            sm = max;
            max=arr[i];
        }
       else if(sm<arr[i] && arr[i]!=max){
            sm=arr[i];
        }
    }
    cout<<sm;
}

int main(){
    int arr[10]={2,3,5,8,3,8,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    LargestArr(arr,n);
    return 0;
}