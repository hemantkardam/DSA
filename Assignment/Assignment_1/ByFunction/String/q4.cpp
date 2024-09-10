// Objective: Write a C++ program to remove all vowels (a, e, i, o, u, both lowercase and uppercase) 
// from a given string.
// Input:
// • A single string s of length n where 1 ≤ n ≤ 1000.
// Output:
// • The string after removing all vowels.
// Example:
// Example 1:
// Input:
// beautiful
// Output:
// btfl
// Example 2:
// Input:
// AEIOUaeiou
// Output:
// (empty string)


#include<iostream>
#include<string>
using namespace std;

void check(string str,int n){
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str.erase(i,i);
        }
    }
    cout<<str;
}

int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    check(str,n);
    // str.erase(1,2);
    // cout<<str;

}