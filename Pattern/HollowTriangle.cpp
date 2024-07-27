#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

// ----------- For a Right angle Triangle with Hollow ----------------
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            if(i==n || j==1 || i==j){
                cout<<"* ";
            }
            else{
            cout<<"  ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }

}