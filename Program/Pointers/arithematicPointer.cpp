#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p=&a;

    cout<<"Address of p : "<<p<<endl;
    cout<<"Address of p+1 : "<<p+1<<endl;
    cout<<"Address of p+2 : "<<p+2<<endl;
    cout<<"Address of p+3 : "<<p+3<<endl;
    // int arr[]={1,2,3,4,5};
    // int *p=arr;
    // cout<<"*p value is :"<<*p<<endl;
    // cout<<"*(p+1) value is :"<<*(p+1)<<endl;
    // cout<<"*(p+2) value is :"<<*(p+2)<<endl;
    // cout<<"*(p+3) value is :"<<*(p+3)<<endl;

    // cout<<"Print index 0 "<<*(p++)<<endl;
    // cout<<"Print index 2 "<<*(++p)<<endl;
}