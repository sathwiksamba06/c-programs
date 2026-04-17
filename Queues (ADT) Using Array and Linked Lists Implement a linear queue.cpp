#include<iostream>
using namespace std;
#define MAX 6
class queue{
    private:
    int qu[MAX];
    int front,rear;
    public:
    queue(){
        front=-1;
        rear=-1;
    }
void Enqueue(int item){
    if(rear==MAX-1){
        cout<<"queue is FULL-OverFlow";
    }else if(front==-1&&rear==-1){
        front=rear=0;
        qu[rear]=item;
    }
    else
    {
        rear++;
    }
    qu[rear]=item;
}
int dequeue(){
    int item;
    if(front==-1||front>rear){
        cout<<"queue is Empty-underflow";
        return-1;
    }else{
        item=qu[front];
        front++;
        return item;
    }
}
int peek(){
    if(front==-1||front>rear){
        cout<<"queue is Empty";
        return-1;
    }else{
        return qu[front];
    }
}
void display(){
     if(front==-1||front>rear){
     cout<<"queue is Empty";
}
else{
    cout<<"the queue elements are:";
    for(int i=front;i<=rear;i++)
    cout<<qu[i]<<" ";
}
}
};
int main(){
    queue q;
    int opt,val;
    cout<<"\n1.insert \n2.delete \n3.peek \n4.display \n5.exit"<<endl;
    do{
        cout<<"enter your option:";
        cin>>opt;
        switch(opt){
            case 1:
            cout<<"enter elements to insert:";
            cin>>val;
            q.Enqueue(val);
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
// output
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
front element=20
enter your option:4
the queue elements are:20 30 40 
enter your option:5

        

    

