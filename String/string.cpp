#include<iostream>
using namespace std;

int main(){
    char a[]={'H','A','R','R','Y'};
    int n=sizeof(a)/sizeof(char);
    cout<<n<<endl;

    for(int i=0;a[i]!='\0';i++){
        cout<<a[i]<<" ";
    }
    return 0;
}