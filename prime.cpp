#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=0;
    if(n==1 || n==0 ||  n<0)
    {
        cout<<n<<" is not a prime number.";
    }
    for(int i=2;i<=n;i++)
    {
        
        if(n%i==0){
            count++;
        }
    }
    if(count==1)
    cout<<"Prime number";
    else
    cout<<"not a prime";
}