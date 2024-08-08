#include<iostream>
#include<climits>
using namespace std;

void MaxWithClimits(int *a,int size){
    int max=INT_MIN;
    int scndMax=INT_MIN;
    int thirdMax=INT_MIN;
    
    for(int i=0;i<size;i++)
    {
        if(a[i]>thirdMax)
        {
            thirdMax=a[i];
            if(scndMax<thirdMax){
                    int temp=0;
                    temp=thirdMax;
                    thirdMax=scndMax;
                    scndMax=temp;
                if(max<scndMax){
                int temp=0;
                temp=scndMax;
                scndMax=max;
                max=temp;
            }}
                    
        }
    }
    cout<<"Maximum value of array : "<<max<<endl;
    cout<<"Second Maximum value of array : "<<scndMax<<endl;
    cout<<"Third Maximum value of array : "<<thirdMax<<endl;
}

void MinWithClimits(int *a,int size){
    int min=INT_MAX;
    int scndMin=INT_MAX;
    int thirdMin=INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(a[i]<min){
            thirdMin=a[i];
            if(thirdMin<scndMin){
                int temp=0;
                temp=scndMin;
                scndMin=thirdMin;
                thirdMin=temp;
                if(scndMin<min){
                    int temp=0;
                    temp=min;
                    min=scndMin;
                    scndMin=temp;
                }
            }
        }
    }
    cout<<"Minimum value of array : "<<min<<endl;
    cout<<"Second Minimum  value of array : "<<scndMin<<endl;
    cout<<"Third Minimum value of array : "<<thirdMin<<endl;
}

int main(){
    int a[]={3,5,7,8,4,2,1,20,30,10,40,0,0,1,40,40,30};
    int size=sizeof(a)/sizeof(int);
    MaxWithClimits(a,size);   
    MinWithClimits(a,size);   
}