#include<iostream>
using namespace std;
class SWAP{
    public:
    int i;float j;char k;
    void swap(int a,int b){
    i=a;
    a=b;
    b=i;
    cout<<"after swap"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    void swap(float c,float d)
    {
        j=c;
        c=d;
        d=k;
        d=j;
        cout<<"after swap"<<endl<<"c="<<c<<endl<<"d="<<d<<endl;
    }
        void swap(char e, char f){
            k=e;
            e=f;
            f=k;
            cout<<"after swap"<<endl<<"e="<<e<<endl<<"f="<<f<<endl;
        }
    
    
    
    
};
int main(){
    SWAP s;
    s.swap(15,15);
    s.swap(12.5f,4.5f);
    s.swap('A','b');
}
//output
after swap
a=15
b=15
after swap
c=4.5
d=12.5
after swap
e=b
f=A
