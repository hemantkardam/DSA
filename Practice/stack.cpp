#include<iostream>
using namespace std;

int main(){
    int i=-1;
    int s=1;

    cout<<(i!=-1)? 1:  1;
}

// class Stack{
//     int *arr;
//     int top;
//     int size;

//     public:
//     Stack(int s){
//         size=s;
//         top=-1;
//         arr=new int [s];
//     }

//     void push(int val){
//         if(top == size-1){
//             cout<<"Stack is overflow"<<endl;
//             return;
//         }
//         else{
//             top++;
//             arr[top]=val;
//             // cout<<size<<endl;
//         }
//     }
    
//     void pop(){
//         if(top==-1){
//             cout<<"Stack is underflow."<<endl;
//         }
//         else{
//             top--;
//             size--;
//         }
//     }

//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     int isTop(){
//         return arr[top];
//     }

//     int isPeek(){
//         return arr[top];
//     }

//     int isSize(){
//         return size;
//     }

// };

// int main(){
//     Stack s(5);
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     cout<<"Size :"<<s.isSize()<<endl;
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     int result = s.isEmpty();
//     if(result==1){
//         cout<<"Stack is empty.";
//     }
//     else{
//         cout<<"Stack is not empty.";
//     }

//     // return 0;
// }



