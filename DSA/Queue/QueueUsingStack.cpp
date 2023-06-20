#include <bits/stdc++.h>
using namespace std;
class Queue{
    stack<int>s;
    stack<int>d;
    
    public:
    void push(int x){
        s.push(x);
    }
    int pop(){
        if(s.empty() && d.empty()){
            return -1;
        }
        while(!s.empty()){
            d.push(s.top());
            s.pop();
        }
        int t=d.top();
        d.pop();
        return t;
    }

    int top(){
        if(s.empty() && d.empty()){
            return -1;
        }
        while(!s.empty()){
            d.push(s.top());
            s.pop();
        }
        return d.top();
    }
};
int main(){
    Queue s;
    s.push(1);
     s.push(2); s.push(3); s.push(4);
     cout<<s.pop()<<endl;
     cout<<s.top()<<endl;

     
     
}