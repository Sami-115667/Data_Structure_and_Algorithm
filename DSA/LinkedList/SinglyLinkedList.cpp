#include <bits/stdc++.h>
using namespace std;

class node {
public:
  int data;
  node *next;

  node(int x) {
    data = x;
    next = NULL;
  }
};

void InsertAtHead(node *&head, int val) {
  node *temp = new node(val);
  if (head == NULL) {
    head = temp;
    return;
  }
  temp->next = head;
  head = temp;
}

void InsertAtTail(node *&head, int d) {
  node *temp = new node(d);
  if (head == NULL) {
    head = temp;
    return;
  }
  node *temp1 = head;
  while (temp1->next != NULL) {
    temp1 = temp1->next;
  }
  temp1->next = temp;
}

void InsetAtPosition(node *&head, int d, int position) {
  node *temp = new node(d);
  if (head == NULL) {
    head = temp;
    return;
  }
  node *temp1 = head;
  int count = 1;
  while (count < position - 1) {
    temp1 = temp1->next;
    count++;
  }
  temp->next = temp1->next;
  temp1->next = temp;
}

void DeleteAtHead(node *&head) {
  if (head == NULL) {
    cout << "LinkedList is empty" << endl;
    return;
  }
  node *todelete = head;
  head = head->next;
  delete todelete;
}

void DeleteAtPosition(node *&head, int position) {
  if (head == NULL) {
    cout << "LinkedList is empty" << endl;
    return;
  }
  if (position == 1) {
    DeleteAtHead(head);
    return;
  }
  node *temp1 = head;
  node *todelete;
  int count = 1;
  while (count < position - 1) {
    temp1 = temp1->next;
    count++;
  }
  todelete = temp1->next;
  temp1->next = temp1->next->next;
  delete todelete;
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

int main() {
  node *head = NULL;
  print(head);
  InsertAtTail(head, 1);
  InsertAtTail(head, 2);
  print(head);
  InsertAtHead(head, 3);
  print(head);
  InsetAtPosition(head, 5, 2);
  print(head);
  DeleteAtHead(head);
  print(head);
  DeleteAtPosition(head, 3);
  print(head);
}