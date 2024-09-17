#include<iostream>
#include<string>
using namespace std;

bool check(string s,int n){
    int l=0;
    int h=n-1;
    while(l<h){
        if(s[l]!=s[h]){
            return false;
        }
        l++;
        h--;
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    int result=check(s,n);
    if(result==0){
        cout<<"It is not pallindrom.";
    }
    else{
        cout<<"It is pallindrom.";
    }

    return 0;
}