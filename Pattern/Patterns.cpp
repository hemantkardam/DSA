#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;

//
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     {
//         while(j<=n)
//         {
//             if(i==1 || i==(n+1)/2 || j==1 || j==n){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         if(i==1 || j==1 || (i==(n+1)/2)|| (j==n && i<=n/2)){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         if(i==j ||  j==n-i+1 || i==(n+1)/2 || j==(n+1)/2){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n)
//     {
//         if(i==1 || i==n || j==1 || j==n || j==(n+1)/2 || i==(n+1)/2){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

int i=1;
while(i<=n)
{
    int j=1;
    while(j<=i)
    {
        if(j<=n-i+1){
            cout<<"* ";
        }
        else{
        cout<<"  ";
        }
        j++;
    }
    cout<<endl;
    i++;
    
}
}
       