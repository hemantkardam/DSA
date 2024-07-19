#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;
//-------------- For a Square star pattern


// ------------By For Loop ---------------
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++){
//             if(j==1 || j==n || i==1 || i==n){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//     }
//         cout<<endl;
//     }
// }

// -------------------By While Loop ----------------------
    // int i=1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=n)
    //     {
    //         if(i==1 || i==n || j==1 || j==n){
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

//-----------For a Pyramid -------------------------


    // int i=1;
    // while(i<=n){
    //     int k=1;
    //     while(k<=n-i){
    //         cout<<"  ";
    //         k++;
    //     }
    //     int j=1;
    //     while(j<=i*2-1){
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

// --------- For a Opposite pyramid ----------


    // int i=n;
    // while(i>=1)
    // {
    //     int k=1;
    //     while(k<=n-i){
    //         cout<<"  ";
    //         k++;
    //     }
    //     int j=1;
    //     while(j<=2*i-1)
    //     {
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i--;
    // }
// }
// ----------- For a Right angle Triangle ----------------
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         if(i==n || j==1 || i==j){
//             cout<<"* ";
//         }
//         else{
//         cout<<"  ";
//         }
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

//---------- for X-Star Patttern ------------- 
// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=n){
//         if(i==j || j==n-i+1){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//             j++;
//     }
//         cout<<endl;
//         i++;
// }

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
       