#include<iostream>
using namespace std;
#define SIZE 5
class Deque{
    private:
    int dq[SIZE];
    int front,rear;
    public:
    Deque(){
        front=-1;
        rear=-1;
    }
    void insertFront(int x)
    {
        if((front==0 && rear==SIZE-1)||(front==rear+1)){
        cout<<"Queue is Full - Queue Overflow";
        return;
        }
        else if(front==-1 && rear==-1)
        front=rear=0;
        else if(front==0)
        front=SIZE-1;
        else
        front=front-1;
        
        dq[front]=x;
    }
    //Insert at rear
    void insertRear(int x)
    {
        if((front==0 && rear==SIZE-1)||(front==rear+1)){
        cout<<"Queue is Full - Queue Overflow";
        return;
        }
        else if(front==-1 && rear==-1)
        front=rear=0;
        else if(rear==SIZE-1)
        rear=0;
        else
        rear++;
        
        dq[rear]=x;
    }
    //Delete from front
    int deleteFront()
    {
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty - Underflow";
        return -1;
    }
    int item=dq[front];
    if(front==rear)
    front=rear=-1;
    else if(front==SIZE-1)
    front=0;
    else
    front++;
    
    return item;
    }
    //Delete from Rear
    int deleteRear()
    {
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty - Underflow";
        return -1;
    }
    int item=dq[rear];
    if(front==rear)
    front=rear=-1;
    else if(rear==0)
    rear=SIZE-1;
    else
    rear--;
    
    return item;
    }
    //Det Front
    int getFront(){
        if(front==-1){
            cout<<"Deque is empty";
            return -1;
        }
        return dq[front];
    }
    //Get Rear
    int getRear(){
        if(rear==-1){
            cout<<"Deque is empty";
            return -1;
        }
        return dq[rear];
    }
    //Display
    void display()
    {
        if(front==-1)
        {
            cout<<"Deque is empty";
            return;
        }
        cout<<"\nElements in deque are: ";
        int i=front;
        while(i!=rear)
        {
            cout<<dq[i]<<" ";
            i=(i+1)%SIZE;
        }
        cout<<dq[rear];
    }
};

//Main Function
    int main(){
    Deque q;
    int opt,val;
    int x;
    cout<<"\n1.Insert Front";
    cout<<"\n2.Insert Rear";
    cout<<"\n3.Delete Front";
    cout<<"\n4.Delete Rear";
    cout<<"\n5.Get Front";
    cout<<"\n6.Get Rear";
    cout<<"\n7.Display";
    cout<<"\n8.Exit"<<endl;
    
    do
    {
        cout<<"Enter your option: "<<endl;
        cin>>opt;
    
    switch(opt)
    {
        case 1:
        cout<<"Enter element: ";
        cin>>val;
        q.insertFront(val);
        break;
        
        case 2:
        cout<<"Enter element: ";
        cin>>val;
        q.insertRear(val);
        break;
        
        case 3:
        x=q.deleteFront();
        if(x!=-1)
        cout<<x<<": is deleted from front\n";
        break;
        
        case 4:
        x=q.deleteRear();
        if(x!=-1)
        cout<<x<<": is deleted from rear\n";
        break;
        
        case 5:
        x=q.getFront();
        if(x!=-1)
        cout<<x<<": is front element\n";
        break;
        
        case 6:
        x=q.getRear();
        if(x!=-1)
        cout<<x<<": is rear element\n";
        break;
        
        case 7:
        q.display();
        break;
        //default : return;
    }
    cout<<endl;
    }while(opt!=8);
    return 0;
    }
//output
1.Insert Front
2.Insert Rear
3.Delete Front
4.Delete Rear
5.Get Front
6.Get Rear
7.Display
8.Exit
Enter your option: 
1
Enter element: 30

Enter your option: 
1
Enter element: 20

Enter your option: 
1
Enter element: 10

Enter your option: 
2
Enter element: 40

Enter your option: 
2
Enter element: 50

Enter your option: 
7

Elements in deque are: 10 20 30 40 50
Enter your option: 
8
