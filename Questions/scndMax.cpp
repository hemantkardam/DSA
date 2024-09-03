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
        if(sm<arr[i] && arr[i]!=max){
            sm=arr[i];
        }
    }
    cout<<sm;
}

int main(){
    int arr[10]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    LargestArr(arr,n);
    return 0;
}