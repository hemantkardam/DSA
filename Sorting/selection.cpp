#include<iostream>
using namespace std;

void selectionSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
}
}
void takeinput(int *a,int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}


void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
        cout<<endl;
}


int main()
{
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;
    int arr[20];
    takeinput(arr,n);
    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);
}