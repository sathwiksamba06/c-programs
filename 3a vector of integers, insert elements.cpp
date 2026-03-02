#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>integers={10,20,30,40};
    cout<<"integer before inserting:"<<endl;
    for(int i:integers){
        cout<<i<<" ";
    }
    cout<<" "<<endl;
    integers.push_back(50);
    cout<<"integer after inserting:"<<endl;
    for(int i:integers){
        cout<<i<<" ";
    }
    return 0;
}
//output:
integer before inserting:
10 20 30 40  
integer after inserting:
10 20 30 40 50 
