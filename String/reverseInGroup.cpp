#include<iostream>
using namespace std;

void reverse(char *a,int n){
    for (int i = 0; i < n; i+=2)
    {
        if(i+1<n){
            swap(a[i],a[i+1]);
        }
    }
    
    
}

void print(char *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main(){
    char a[]="Hemant";
    int n=sizeof(a);
    print(a,n);
    reverse(a,n);
    print(a,n);
}