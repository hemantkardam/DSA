#include<iostream>
using namespace std;

int main(){
    char a;
    int m,n;

    cout<<"Enter a two number: ";
    cin>>m>>n;
    cout<<"Enter the first letter of operation.";
    cin>>a;


    switch (a)
    {
    case 'A':cout<<m+n;
        break;
    case 'S':cout<<m-n;
        break;
    case 'D':cout<<m/n;
        break;
    case 'M':cout<<m*n;
        break;
    default:cout<<"Invalid choice! Pls try again.";;
        break;
    }
}