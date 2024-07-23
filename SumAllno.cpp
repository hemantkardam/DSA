#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number for sum of all the number :-";
    cin>>n;
    int i=1,sum=0;
    do
    {
        cout<<sum<<" + "<<i<<" = ";
        sum=i+sum;
        cout<<sum<<endl;
        i++;
    } while (i<=n);

}