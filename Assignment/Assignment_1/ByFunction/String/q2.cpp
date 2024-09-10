// Objective: Write a C++ program to check whether a given string is a palindrome. A string is 
// considered a palindrome if it reads the same backward as forward, ignoring case and non-alphabetic 
// characters.
// Input:
// • A single string s of length n where 1 ≤ n ≤ 1000. The string may contain spaces, punctuation 
// marks, and both lowercase and uppercase letters.
// Output:
// • Print "Yes" if the string is a palindrome, otherwise print "No".
// Example 1:
// Input:
// Hello
// Output:
// No
// Example 2:
// Input:
// racecar
// Output:
// Yes

#include<iostream>
#include<string>

using namespace std;

void isPalindrome(string str,int n){
    int l=0;
    int h=n-1;
    while(l<=h){
        if(str[l]==str[h]){
            l++;
            h--;
        }
        else if(str[l]!=str[h]){
            cout<<"False"<<endl;
            l++;
            h--;
        }
    }
    // cout<<"True"<<endl;
}

int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    isPalindrome(str,n);

}