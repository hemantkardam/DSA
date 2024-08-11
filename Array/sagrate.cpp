#include<iostream>
using namespace std;

void takeinput(int *arr, int &size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


void printArray(int *arr, int &size){
    cout<<"Array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *arr = new int[size];

    takeinput(arr,size);
    printArray(arr,size);

}