#include<iostream>
using namespace std;

int main(){
    // int r,c;
    // cout<<"Enter a Row no :";
    // cin>>r;
    // cout<<"Enter a Column no :";
    // cin>>c;

    // for(int i=1;i<=r;i++){
    //     for (int j=1; j<=c; j++)
    //     {
    //         if(i==1 || i==r || j==1 || j==c)
    //         cout<<"* ";
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    int n;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=n;i>=1;i--){
        for (int k=i-1; k>=1; k--)
        {
            cout<<"  ";
        }
        for (int j=n-i+1; j>=1; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}