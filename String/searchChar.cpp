#include<iostream>
using namespace std;

int search(char *a,int n,char key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return 1;
        }
    }
    return -1;
}

int main(){
    char a[]={'H','A','R','R','Y'};
    int n=sizeof(a)/sizeof(char);

    char key;
    cout<<"Enter the character :";
    cin>>key;

    int index=search(a,n,key);
    if(index==-1){
        cout<<key<<" is not found";
    }
    else if(index==1){
        cout<<key<<" is found";
    }

}