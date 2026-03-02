#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>integers;
    integers.insert(10);
    integers.insert(20);
    integers.insert(30);
    integers.insert(40);
    integers.insert(50);
    integers.erase(50);
    cout<<"unique integers are :"<<endl;
    for(int x:integers)
    cout<<x<<" ";
    }
//output:
unique integers are :
10 20 30 40 
