#include <bits/stdc++.h>
using namespace std;

class node {
public:
  int data;
  node *next;
  node(int d) {
    data = d;
    next = NULL;
  }
};

void InsertatTail(node *&head, int d) {
  node *temp = new node(d);
  if (head == NULL) {
    head = temp;
    temp->next = head;
    return;
  }

  node *temp1 = head;
  while (temp1->next != head)
    temp1 = temp1->next;
  temp1->next = temp;
  temp->next = head;
}

void print(node *head) {
  if (head == NULL) {
    cout << "Empty List" << endl;
    return;
  }

  node *temp = head;
  do {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != head);
  cout << endl;
}

int main() {
  node *head = NULL;
  InsertatTail(head, 1);
  print(head);
  InsertatTail(head, 2);
  print(head);
  InsertatTail(head, 3);
  print(head);

  return 0;
}
