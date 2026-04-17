#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class queue{
    private:
    Node*front;
    Node*rear;
    public:
    queue(){
        front=rear=NULL;
    }

void Enqueue(int item){
    Node*newNode=new Node(item);
    if(front==NULL){
        front=rear=newNode;
    }else{
        rear->next=newNode;
        rear=newNode;
    }
}
int dequeue(){
    if(front==NULL){
        cout<<"queue is Empty";
        return -1;
    }
    Node*temp=front;
    int x=front->data;
    front=front->next;
    if(front==NULL)
    rear=NULL;
    return x;
}
int peek(){
    if(front==NULL){
        cout<<"queue is Empty";
        return -1;
}
return front->data;
}
void display(){
    if(front==NULL){
        cout<<"queue is Empty";
        return;
}
Node*temp=front;
cout<<"the queue elements are:";
while(temp!=rear){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<rear->data<<" ";
cout<<endl;
}
};
int main(){
    queue q;
    int opt,item;
    cout<<"\n1.insert \n2.delete \n3.peek \n4.display \n5.exit"<<endl;
    do{
        cout<<"enter your option:";
        cin>>opt;
        switch(opt){
            case 1:
            cout<<"enter elements to insert:";
            cin>>item;
            q.Enqueue(item);
            break;
            case 2:
            item=q.dequeue();
            if(item!=-1)
            cout<<"deleted element="<<item;
            break;
            case 3:
            item=q.peek();
            if(item!=-1)
            cout<<"front element="<<item;
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
front element=20
enter your option:4
the queue elements are:20 30 40 

enter your option:5



=== Code Execution Successful ===
        
