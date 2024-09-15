#include<iostream>
using namespace std;

void sort(int *a,int n){
    int count=0;
    for(int i=0;i<10;i++){
        if(a[i]!=0){
            swap(a[i],a[count]);
            count++;
        }
    }
}


int main(){
    int a[10]={0,5,0,0,0,10,5,0,8,7};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);    
    for(int i=0;i<10;i++){
        cout<<a[i]<<"\t";
    }
}