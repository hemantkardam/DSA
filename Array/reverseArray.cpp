#include<iostream>
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
        cout<<endl;
}

int reverse(int *a,int n){
    int i=0;
    int j=n-1;
    
    while (i<j)
    {
        swap(a[i],a[j]);
        j--;
        i++;    
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[10];
    inputArray(a,n);
    printArray(a,n);
    reverse(a,n);
    printArray(a,n);
}