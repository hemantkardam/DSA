#include<iostream>
using namespace std;

int main(){
    int a=10;
    float b=20;
    char c='j';

    void *s=&a;
    void *d=&b;
    void *e=&c;

    cout<<s<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<endl;
    
    // error: 'void*' is not a pointer-to-object type
    // cout<<*s<<endl;
    // cout<<*d<<endl;
    // cout<<*e<<endl;
}