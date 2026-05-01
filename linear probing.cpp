#include<iostream>
using namespace std;
#define SIZE 7
class HashTable{
    int table[SIZE];
    public:
    HashTable(){
        for(int i=0;i<SIZE;i++)
        table[i]=-1;
    }
    int HashFunction(int key){
        return key%SIZE;
    }
    void insert(int key){
        int index=HashFunction(key);
    if(table[index]==-1){
        table[index]=key;
    }else{
        int i=1;
        while(i<SIZE){
            int newIndex=(index=i)%SIZE;
            if(table[newIndex]==-1){
                table[newIndex]=key;
                return;
            }
            i++;
        }
        cout<<"Hashtable is Full/n";
    }
    }
    void search(int key){
        int index=HashFunction(key);
        int i=0;
        while(i<SIZE){
            int newIndex=(index+i)%SIZE;
            if(table[newIndex]==key){
                cout<<"Element"<<key<<"Fount at index"<<newIndex<<endl;
                return;
            }
            if(table[newIndex]==-1)
            break;
            i++;
        }
        cout<<"element not found/n";
    }
    void display(){
        cout<<"\n HashTable/n :";
        for(int i=0;i<SIZE;i++){
            cout<<i<<"-->";
            if(table[i]==-1)
            cout<<"empty";
            else
            cout<<table[i];
            cout<<endl;
        }
    }
    void deletekey(int key){
        int index=HashFunction(key);
        int i=0;
        while(i<SIZE){
            int newIndex=(index+i)%SIZE;
            if(table[newIndex]==key){
         cout<<"Element"<<key<<"Fount at index"<<newIndex<<endl;
         cout<<table[newIndex]<<"deleted\n";
         table[newIndex]=-1;
         return;
            }
            i++;
        }
        
    }
};
int main(){
    HashTable h;
    int n,key;
    cout<<"enter number of element:";
    cin>>n;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>key;
        h.insert(key);
    }
    h.display();
    cout<<"enter key to delete:";
    cin>>key;
    h.deletekey(key);
    h.display();
    cout<<"\n Enter element to search:";
    cin>>key;
    h.search(key);
    return 0;
}
//output
enter number of element:7
enter elements: 50
700
76
85
92
73
101

 HashTable/n :0-->700
1-->50
2-->85
3-->92
4-->73
5-->101
6-->76
enter key to delete:700
Element700Fount at index0
700deleted

 HashTable/n :0-->empty
1-->50
2-->85
3-->92
4-->73
5-->101
6-->76

 Enter element to search:85
Element85Fount at index2

