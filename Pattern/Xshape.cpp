#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
 
// ---------- for X-Star Patttern ------------- 
int i=1;
while(i<=n)
{
    int j=1;
    while(j<=n){
        if(i==j || j==n-i+1){
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