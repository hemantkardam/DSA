#include<iostream>
using namespace std;

bool check(char *a,int n){
    int l=0;
    int h=n-1;
    while (l<h)
    {
        if(a[l]!=a[h]){
            return false;
        }
        l++;
        h--;
    }
    return true;
}

int main(){
    char a[]="nitin";
    int n=sizeof(a)/sizeof(char);

    // int f=check(a,n);
    // if(f==1){
    //     cout<<"It is Pallindrom.";
    // }
    // else if(f==-1){
    //     cout<<"It is not Pallindrom.";
    // }
    bool s=check(a,n);
    if(s==true){
        
        cout<<"It is Pallindrom.";
    }
    else{
        cout<<"It is not Pallindrom.";

    }
}