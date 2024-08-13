#include<iostream>
using namespace std;

int main(){
    char *ch=new char('H');
    int *p=new int(5);
    float *d=new float(7.23);
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<d<<endl;
    cout<<d+1<<endl;
    cout<<*d<<endl;
    cout<<(void*)ch<<endl;
    cout<<(void*)ch<<endl;
    // return 0;
}