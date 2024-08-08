#include<iostream>
using namespace std;

int main(){
    // int a[10]={1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<10;i++)
    // cout<<a[i]<<"  ";

    // cout<<endl<<&a<<endl;
    // cout<<a<<endl;
    // cout<<*a<<endl;

    int *arr=new int[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }    
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }    
    cout<<endl<<&arr<<endl;
    cout<<arr<<endl;
    cout<<endl<<&arr<<endl;
    
    // for address
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<arr+2<<endl;

    // for Value
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
}
