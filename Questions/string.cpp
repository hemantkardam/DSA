#include <iostream>
#include <string>
using namespace std;

int check(string s, int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (s[i] == s[j])
            {
                for(int k=j;k>=0;k--){
                    if(s[j]==s[k]){
                        break;
                    }
                    else{
                        count++;
                    }
                }
            }
        }
        cout<<count<<"";
    }
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    // cout<<n;
    check(s, n);
    return 0;
}
