#include<iostream>
#include<climits>
using namespace std;

void inputArray(int *a,int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
}
void secondMax(int *a,int n){
    int max;
    int sm=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<a[i]){
        max=a[i];
        }
        if(sm<a[i] && a[i]<max){
            sm=a[i];
        }
    }
            cout<<"Second Max : "<<sm;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[10];
    inputArray(a,n);
    printArray(a,n);
    secondMax(a,n);
}