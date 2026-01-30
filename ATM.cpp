#include<iostream>
using namespace std;
class ATM{
    public:
    int balance,withdrawamount,remainingamount;
    ATM()
    {
        balance=5000;
        cout<<"insert a card"<<endl;
        cout<<"pin verification"<<endl;
        cout<<"session started"<<endl;
    
    }
    void checkbalance(){
     cout<<"enter withdraw amount"<<endl;
     cin>>withdrawamount;
     remainingamount=balance-withdrawamount;
     cout<<"remainig amount"<<remainingamount;
    }
        
    };
    int main(){
        ATM C1;
        C1.checkbalance();
       
    }
    
// insert a card
// pin verification
// session started
// enter withdraw amount
// 2000
// remainig amount3000


