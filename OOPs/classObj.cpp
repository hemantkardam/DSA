#include<iostream>
using namespace std;

class data{
    string name;
    int rollNo;
    public:
    void setValue(string n,int r){
        name=n;
        rollNo=r;
    }
    void getValue(){
        cout<<name<<endl;
        cout<<rollNo<<endl;
    }
};

int main(){
    data obj1;
    obj1.setValue("Harry",15);
    obj1.getValue();

    return 0;
}