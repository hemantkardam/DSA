#include<iostream>
using namespace std;

void reverse(char *a,int n){
    int l=0;
    int h=n-1;
    while (l<=h)
    {
        swap(a[l],a[h]);
        l++;
        h--;
        
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i];
    // }
    
}

void print(char *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main(){
    char a[]="Hemant";
    int n=sizeof(a);
    print(a,n);
    reverse(a,n);
    print(a,n);
}

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
    string str;
    getline(cin,str);
    int n=str.size();
    // cout<<n;
    swapStr(str,n);
}