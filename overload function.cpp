#include<iostream>
using namespace std;
class sum{
    public:
    void add(int a,int b){
        cout<<"sum of a+b:"<<a+b<<endl;
        
    }
    void add(float c,float d){
        cout<<"sum of c+d:"<<c+d<<endl;
    }
    
};
int main(){
    sum s;
    int a,b;
    float c,d;
    cout<<"enter the a:";
    cin>>a;
    cout<<"enter the b:";
    cin>>b;
    cout<<"enter the c value:";
    cin>>c;
    cout<<"enter the d value:";
    cin>>d;
    
    s.add(a,b);
    s.add(c,d);
}
// output
enter the a,b
2 3
enter the c,d
sum of a+b:6
sum of c+d:31
