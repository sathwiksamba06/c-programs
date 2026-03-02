#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){
    list<string>strings;
    list<string>::iterator s;
    strings.push_front("apple");
    strings.push_front("banana");
    strings.push_front("kiwi");
    strings.push_back("mango");
    strings.remove("mango");

    for(s=strings.begin();s!=strings.end();s++){
        cout<<*s<<endl;
    }
    
}
//output:
kiwi
banana
apple
