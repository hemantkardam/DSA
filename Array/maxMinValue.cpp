//--------- By library of climits. -------------

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int a=INT_MAX;
//     int b=INT_MIN;

//     cout<<a<<endl<<b;
//     return 0;
// }

// -------- By create functions -----------
#include<iostream>
#include<climits>
using namespace std;

void MaxWithClimits(int *a,int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum value of array : "<<max<<endl;
}
void MinWithClimits(int *a,int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"Maximum value of array : "<<min<<endl;
}
void MaxWithZero(int *a,int size){
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum value of array : "<<max<<endl;
}
void MinWithZero(int *a,int size){
    int min=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>min)
        {
            min=a[i];
        }
    }
    cout<<"Maximum value of array : "<<min<<endl;
}


int main(){
    int a[]={4,2,24,5,6,7,8,4,33,2,1,9};
    int size=sizeof(a)/sizeof(int);
    // MaxWithClimits(a,size);
    // MinWithClimits(a,size);
    MaxWithZero(a,size);
    MinWithZero(a,size);
}