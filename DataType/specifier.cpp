// Specifier in c++
// 1. Auto
// 2. Register
// 3. Static
// 4. typedef
// 5. Extern

// Qualifier
// 1. const
// 2. Volatile
// 3. Restrict

#include<iostream>
using namespace std;

int func1(){
    for (int i = 0; i < 5; i++)
    {
        int a=5;
        cout<<a++<<endl<<a<<endl;
    }
    
}
int func(){
    for (int i = 0; i < 5; i++)
    {
        static int a=5; 
        cout<<a++<<endl;
    }
    
}
int main(){
    func1();
    cout<<endl<<endl;
    func();

}