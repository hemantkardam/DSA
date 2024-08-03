#include<iostream>
using namespace std;
int e;
int sum(int c, int d ){
    e=c+d;
    cout<<"sum of A & B is "<<c+d<<endl;
    return e*c;
}


int main(){
int a ,b;
cout<<"Enter a two number :";
cin>>a>>b;
cout<<"Again :"<<sum(a,b);
;
return 0;
}