// Objective: Write a C++ program to find the frequency of each character in a given string. The 
// program should count how many times each character (including spaces and punctuation marks) 
// appears in the string.
// Input:
// • A single string s of length n where 1 ≤ n ≤ 1000. The string may contain uppercase letters, 
// lowercase letters, digits, spaces, and special characters.
// Output:
// • Print the frequency of each character that appears in the string, sorted by the order in which 
// they appear.
// Example 1:
// Input:
// hello world
// Output:
// h: 1
// e: 1
// l: 3
// o: 2
// : 1
// w: 1
// r: 1
// d: 1

#include<iostream>
#include<string>
using namespace std;

void findFrequency(string str,int n){
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            count=1;
            if(str[i]==str[j]){
                count++;
            }
        }
            cout<<str[i]<<count<<endl;
    }
}

int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    cout<<n;
    findFrequency(str,n);
}