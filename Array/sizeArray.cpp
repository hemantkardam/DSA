#include<iostream>
using namespace std;

void sumArray(int *a,int *ptrSize){
    int sum=0;
    for(int i=0;i<*ptrSize;i++)
    {
        // sum+=a[i];
        sum=sum+a[i];
    }
    cout<<"Total of array elements : "<<sum<<endl;
    *ptrSize=4;
    cout<<"*ptrSize value in function : "<<*ptrSize<<endl;
}

void printArray(int *a,int *ptrSize){
    for(int i=0;i<*ptrSize;i++)
    {
        cout<<"a[i] = "<<a[i]<<endl;
    }
}

int main(){
    int a[]={1,2,3,4,5,6};
    int size;
    size=sizeof(a)/sizeof(int);
    int *ptrSize =&size;
    // cout<<size;
    // printArray(a,size);
    sumArray(a,ptrSize);
    // cout<<*a;
    // cout<<*(a+1);
    // cout<<*(a+2);
    // cout<<*(a+3);
    cout<<"*ptrSize value in Main function :"<<*ptrSize<<endl;
}