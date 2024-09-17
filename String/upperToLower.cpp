#include<iostream>
using namespace std;

int main(){
    char a;
    cin>>a;

    if(a>='A' && a<='Z'){
        char ans = a+32;
        cout<<ans<<endl;
    }
    else{
        cout<<a<<endl;
    }

    return 0;
}