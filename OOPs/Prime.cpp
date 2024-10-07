#include<iostream>
using namespace std;
class Prime{
    public:
    bool isPrime(int n){
        if(n==0 || n==1){
            return false;
        }
        else{
            for (int i = 2; i < n; i++)
            {
                if(n%i==0){
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    Prime obj1;
    // if(obj1.isPrime(n)){
    //     cout<<"Is a prime no";
    // }else{
    //     cout<<"Is not a prime no";
    // }
    (obj1.isPrime(n))?cout<<"is prime":cout<<"is not a prime";


    
    return 0;
}