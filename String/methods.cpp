#include<iostream>
#include<string>
using namespace std;

void swapStr(string str,int n){ 
    int l=0;
    int h=n-1;
    while(l<=h){
        swap(str[l],str[h]);
        l++;
        h--;
    }
    cout<<str<<endl;
}

int main(){
    string str = "c++";
    int n=sizeof(str);
    cout<<n;
    swapStr(str,n);
}