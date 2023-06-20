#include <bits/stdc++.h>
using namespace std;
class StackQueue {
  int n;
  queue<int> q1, q2;

public:
  StackQueue() { n = 0; }

  void push(int x) {
    q2.push(x);
    n++;
    while (!q1.empty()) {
      q2.push(q1.front());
      q1.pop();
    }

    while (!q2.empty()) {
      q1.push(q2.front());
      q2.pop();
    }
  }

  void pop() {
    q1.pop();
    n--;
  }
  int peek() {
    if (q1.empty())
      return -1;
    return q1.front();
  }
};
int main() {
  StackQueue s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  cout << s.peek() << endl;
  s.pop();
  cout << s.peek() << endl;

  s.pop();
  cout << s.peek() << endl;
  s.pop();
  cout << s.peek() << endl;

  s.pop();
  cout << s.peek() << endl;
  s.pop();
  cout << s.peek() << endl;
  return 0;
}