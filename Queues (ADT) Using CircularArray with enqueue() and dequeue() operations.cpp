#include<iostream>
using namespace std;
#define MAX 6
class circularQueue{
    private:
    int qu[MAX];
    int front,rear;
    public:
   circularQueue(){
        front=-1;
        rear=-1;
    }
    void enqueue(int item){
        if((front==0&&rear==MAX-1)||(rear+1==front)){
            cout<<"queue overflow";
            return;
        }
        if(front==-1)
        front=rear=0;
        else if(rear==MAX-1)
        rear=0;
        else
        rear++;
        qu[rear]=item;
    }
    int dequeue(){
        if(front==-1){
            cout<<"queue is underflow";
            return -1;
        }
        int item=qu[front];
        if(front==rear)
        front=rear=-1;
        else if(front=MAX-1)
        front=0;
        else
        front++;
        return item;
        }
        int peek(){
            if(front==-1){
                 cout<<"queue is Empty";
                 return-1;
            }
            return qu[front];
        }
        void display(){
     if(front==-1)
     {
         cout<<"circular queue is empty";
         return;
     }
      cout<<"circular queue elements are:";
      int i=front;
      while(i!=rear){
          cout<<qu[i]<<" ";
          i=(i+1)%MAX;
      }
      cout<<qu[rear];
     }
};
int main(){
    circularQueue q;
    int opt,val;
    cout<<"\n1.insert \n2.delete \n3.peek \n4.display \n5.exit"<<endl;
    do{
        cout<<"enter your option:";
        cin>>opt;
        switch(opt){
            case 1:
            cout<<"enter elements to insert:";
            cin>>val;
            q.enqueue(val);
            break;
            case 2:
            val=q.dequeue();
            if(val!=-1)
            cout<<"deleted element="<<val;
            break;
            case 3:
            val=q.peek();
            if(val!=-1)
            cout<<"front element="<<val;
            break;
            case 4:
            q.display();
            break;
        }
        cout<<endl;
    }
    while(opt!=5);
    return 0;
}
  //output
1.insert 
2.delete 
3.peek 
4.display 
5.exit
enter your option:1
enter elements to insert:10

enter your option:1
enter elements to insert:20

enter your option:1
enter elements to insert:30

enter your option:1
enter elements to insert:40

enter your option:2
deleted element=10
enter your option:3
front element=10
enter your option:4
circular queue elements are:10 20 30 40
enter your option:5



    









