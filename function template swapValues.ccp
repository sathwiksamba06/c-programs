#include<iostream>
using namespace std;
template <typename T>
void swapValue(T a,T b){
T temp=a;
a=b;
b=temp;
cout<<"after swap"<<endl<<"a=:"<<a<<"b=:"<<b<<endl;
}

int main(){
    int c,d;
    float e,f;
    string g,h;

cout<<"enter the c,d value:"<<endl;
cin>>c>>d;
cout<<"enter tha e,f value:"<<endl;
cin>>e>>f;
cout<<"enter the g,h value:"<<endl;
cin>>g>>h;
swapValue(c,d);
swapValue(e,f);
swapValue(g,h);
}
//output
enter the c,d value:
1 2 
enter tha e,f value:
2 3 
enter the g,h value:
4 5
after swap
a=:2b=:1
after swap
a=:3b=:2
after swap
a=:5b=:4
