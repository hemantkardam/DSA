#include<iostream>
using namespace std;


// How recursion work
    void m5(int n){
        cout<<n<<endl;
    }
    void m4(int n){
        cout<<n<<endl;
        m5(n-1);
    }
    

    void m3(int n){
        cout<<n<<endl;
        m4(n-1);
    }

    void m2(int n){
        cout<<n<<endl;
        m3(n-1);
    }

    void m(int n){
        cout<<n<<endl;
        m2(n-1);
    }

// but you can do in one function
    void s(int n){
        if(n==0){
            cout<<"n khtm ho gya"<<endl;
            return;
        }
        cout<<n<<endl;
        s(n-1);
    }

int main(){
    int days=5;
    s(days);
}