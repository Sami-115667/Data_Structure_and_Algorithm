#include <bits/stdc++.h>
using namespace std;
#define n 100

class StackArray {
  int *arr;
  int top;

public:
  StackArray() {
    arr = new int[n];
    top = -1;
  }

  void push(int x) {

    if (top == n - 1) {
      cout << "Stack is OverFlow" << endl;
      return;
    }
    top++;
    arr[top] = x;
  }

  void pop() {
    if (top == -1) {
      cout << "Stack is Empty" << endl;
      return;
    }
    top--;
  }

  int peek() {
    if (top == -1) {
     // cout << "Stack is Empty" << endl;
      return -1;
    }
    return arr[top];
  }

  void empty() {
    if (top == -1) {
        
      cout << "Stack is Empty" << endl;
     
    }
    else    
    cout << "Stack is not Empty" << endl;
  }
};
int main() {

  StackArray sami;
  sami.push(1);
  sami.push(2);
  sami.push(3);
  sami.push(4);
  cout << sami.peek() << endl;
   sami.pop();
  cout << sami.peek() << endl;
  cout << sami.empty() << endl;
  sami.pop();
  sami.pop();
  sami.pop();
  cout << sami.peek() << endl;
 }