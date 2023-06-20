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

class StackLinkedList {
  node *head;

public:
  StackLinkedList() { head = NULL; }

  bool empty() {
    if (head == NULL)
      return true;
    else
      return false;
  }

  void push(int x) {
    node *temp = new node(x);
    if (empty()) {
      head = temp;
      return;
    }

    temp->next = head;
     head =temp ;
  }

  void pop() {
    if (empty()) {
      cout << "Stack is empty" << endl;
      return;
    }

    head = head->next;
  }

  int top() {
    if (empty()) {
      return -1;
    }

    return head->data;
  }
};

int main() {

  StackLinkedList st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  st.pop();
}