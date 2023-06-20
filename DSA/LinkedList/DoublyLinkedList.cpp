#include <bits/stdc++.h>
using namespace std;

class node {
public:
  int data;
  node *next;
  node *previous;
  node(int d) {
    data = d;
    next = NULL;
    previous = NULL;
  }
};

void Insertathead(node *&head, int d) {
  node *n = new node(d);
  if (head == NULL) {
    head = n;
    return;
  }
  n->next = head;
  if (head != NULL)
    head->previous = n;
  head = n;
}

void print(node *head) {
  if (head == NULL) {
    cout << "Linked List is empty" << endl;
    return;
  }
  node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}


void InsertAttail(node* &head,int d){

    if(head==NULL){
        Insertathead(head,d);
        return;
    }
    node* n=new node(d);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;

}

void DeleteAthead(node*& head){
     if (head == NULL) {
    cout << "LinkedList is empty" << endl;
    return;
  }
  node *todelete = head;
  head = head->next;
  head->previous=NULL;
  delete todelete;
}


void deletion(node* & head, int position){
    node* temp=head;
    if(position==1){
        head=head->next;
        head->previous=NULL;
        return;
    }
    int count=1;
    while (temp!=NULL && count !=position){
        temp=temp->next;
        count++;
    }
    node* todelete=temp;
    //if(temp->previous!=NULL)
    temp->previous->next=temp->next;
    if(temp->next!=NULL)
    temp->next->previous=temp->previous;
    delete todelete;


}

int main(){
       node* head=NULL;
    InsertAttail(head, 1);
    print(head);
     InsertAttail(head, 2);
    print(head);
     InsertAttail(head, 3);
    print(head);
    Insertathead(head  , 4);
    print(head);
    deletion(head, 2);
    print(head);
    DeleteAthead(head);
    print(head);

}