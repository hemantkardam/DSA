//---------- WAP for sum of two NUmbers. -----------------
    #include<iostream>
    using namespace std;

    float sum(float c, float d ){
        // cout<<"sum of A & B is "<<c+d<<endl;
        return c+d;
    }
// ---------- WAP for subtract of two NUmbers. -----------------
    float sub(float c, float d ){
        return c-d;
    }

//---------- WAP for Multiply of two Numbers. -----------------
    float mul(float c,float d){
        return c*d;
    }

//---------- WAP for Dividing of two Numbers. -----------------
    float divi(float c,float d){
        return c/d;
    }

//---------- WAP for Swapping of two Numbers using with third variable. -----------------

    float swap(float c,float d){
        cout<<"The value of A is "<<c<<" and B is "<<d<<endl;
        int temp=c;
        c=d;
        d=temp;
        cout<<"After swapping value of A is "<<c<<" and B is "<<d<<endl;
    }

//---------- WAP for Swapping of two Numbers without using  third variable. -----------------

    float swap_again(float c,float d){
        c=c+d;
        d=c-d;
        c=c-d;
        cout<<"After swapping without using third variable value of A is "<<c<<" and B is "<<d<<endl;
    }

//---------- WAP for Checking Maximum number in  two Numbers. -----------------

    float max(float a,float b){
        if(a>b)
        cout<<"Max number is :"<<a<<endl;
        else
        cout<<"Max number is :"<<b<<endl;

    }

//---------- WAP for Checking Maximum number in  three Numbers. -----------------

    float max_three(float a,float  b,float c){
        if(a>b){
            if(a>c){
                cout<<"Max number in three value :"<<a<<endl;
            }
            else
                cout<<"Max number in three value :"<<c<<endl;
        }
        else if(b>a){
            if(b>c){
                cout<<"Max number in three value :"<<b<<endl;
            }
            else
                cout<<"Max number in three value :"<<c<<endl;
        }
        else
            cout<<"Max number in three value :"<<c<<endl;
    }

//---------- WAP for Find Leap year or Not. -----------------

    int LeapYear(int d){
        if(d%400==0 || d%4==0){
            cout<<"This is a Leap Year :"<<d<<endl;
        }
        else 
        cout<<"This is not a Leap Year :"<<d<<endl;
    }

//---------- WAP to read any month number and display the month name. -----------------

    int Calendar(int a){
        switch (a)
        {
        case 1:cout<<"January";
            break;
        case 2:cout<<"Febuary";
            break;
        case 3:cout<<"March";
            break;
        case 4:cout<<"April";
            break;
        case 5:cout<<"May";
            break;
        case 6:cout<<"June";
            break;
        case 7:cout<<"July";
            break;
        case 8:cout<<"August";
            break;
        case 9:cout<<"September";
            break;
        case 10:cout<<"October";
            break;
        case 11:cout<<"November";
            break;
        case 12:cout<<"December";
            break;
        
        default:cout<<"Invalid choice";
            break;
        }
    }

//---------- WAP to check it is a square shape or rectangle shape. -----------------
 
    int checkShape(int a,int b){
        if(a==b)
            cout<<"It is a square."<<endl;
        else
        cout<<"It is a rectangle."<<endl;
    }

//---------- WAP to check Who is youngest Person. -----------------

    float Youngest(float a,float  b,float c){
        if(a>b){
            if(a>c){
                cout<<"Youngest man is First :"<<a<<endl;
            }
            else
                cout<<"Youngest man is Last :"<<c<<endl;
        }
        else if(b>a){
            if(b>c){
                cout<<"Youngest man is Second :"<<b<<endl;
            }
            else
                cout<<"Youngest man is Last :"<<c<<endl;
        }
        else
            cout<<"Youngest man is Last :"<<c<<endl;
    }
 
// WAP a program to check a given number is Even  or Odd.

    int even(int a){
        if(a==0)
        cout<<"The number is zero,its not a even or odd.";
        else if(a%2==0)
        cout<<"It is even number.";
    else if(a%2!=0)
    cout<<"It is odd number.";
    }

int main()
{
    float a,c,b;
    int d,e,f,g;
    
    // cout<<"Enter a number :";
    // cin>>a;
    // cin>>b;
    // cin>>c;
    // cout<<"Enter a Year :";
    // cin>>d;
    // cout<<"Enter a Number of a month :";
    // cin>>e;
    // cout<<"Enter the length & breath :";
    // cin>>f>>g;
    // cout<<"Summission of A & B is :"<<sum(a,b)<<endl;   
    // cout<<"Subtraction of A & B is :"<<sub(a,b)<<endl;
    // cout<<"Multiplication of A & B is :"<<mul(a,b)<<endl;
    // cout<<"Division of A & B is :"<<divi(a,b)<<endl;
    // swap(a,b);
    // swap_again(a,b);
    // max(a,b);
    // max_three(a,b,c);
    // LeapYear(d);
    // Calendar(e);
    // checkShape(f,g);
    // Youngest(a,b,c);
    // even(a);
    
}