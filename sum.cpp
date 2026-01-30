#include<iostream>
using namespace std;
class student{
    public:
    int a,b,c;
    student()
    {
        cout<<"enter the values"<<endl;
    }
    void display(){
        cout<<"enter a value";
        cin>>a;
        cout<<"enter b value";
        cin>>b;
        c=a+b;
        cout<<"sum="<<c;
    }
        
    };
    int main(){
        student s1;
        s1.display();
        return 0;
    }
    //output 
    // enter the values
    //enter a values 1
    //enter b values 2
    //sum=3
    
    
    


