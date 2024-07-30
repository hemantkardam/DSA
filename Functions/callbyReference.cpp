#include<iostream>
using namespace std;

void swap(int &a, int &b){
    //With using third variable.
    // int temp=a;
    // a=b;
    // b=temp;

    //Without using third variable.
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    int a,b;
    cout<<"Enter a two number: ";
    cin>>a>>b;
    cout<<endl;
    cout<<"Before swapping value of A :"<<a<<endl;
    cout<<"Before swapping value of B :"<<b<<endl;
    cout<<endl;

    swap(a,b);

    cout<<"After swapping value of A :"<<a<<endl;
    cout<<"After swapping value of B :"<<b<<endl;
    cout<<endl;
}