#include<iostream>
using namespace std;

int main(){
    int x=10;
    int *p=&x;

    cout<<endl;
    cout<<"Value of X :"<<x<<endl;
    cout<<"Address of X :"<<p<<endl;
    cout<<"Value of X :"<<*p<<endl;
    cout<<endl;
    cout<<"Address of P :"<<&p<<endl;

    int **ptr=&p;
    cout<<"Value of P :"<<*ptr<<endl;
    cout<<"Address of P :"<<ptr<<endl;
    cout<<"Value of X :"<<**ptr<<endl<<endl;
}