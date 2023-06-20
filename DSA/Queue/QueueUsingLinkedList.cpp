#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
    
    node(int d){
        data=d;
        next=NULL;
    }
};
class Queue{
    node* front;
    node* back;
    public:
    Queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node* n=new node(x);
        if(front==NULL)
        {
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue empty"<<endl;
            return;
        }

        node* todelete=front;
        front=front->next;
        delete todelete; 
    }

    int peek(){
        if(front==NULL){
            cout<<"Queue empty"<<endl;
            return -1;
        }

        return front->data;

    }
};


int main(){
    Queue sami ;
    sami.push(1);
    cout<<sami.peek()<<endl;
    sami.pop();
     sami.push(2);
    cout<<sami.peek()<<endl;
    sami.pop();
     sami.push(3);
    cout<<sami.peek()<<endl;
    sami.pop();
    cout<<sami.peek()<<endl;
    
    
   
}