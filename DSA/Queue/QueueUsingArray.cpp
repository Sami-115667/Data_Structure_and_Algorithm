#include <bits/stdc++.h>
using namespace std;
#define N 100

class Queue{
    int front ;
    int back ;
    int *arr;
    public:
    Queue(){
        arr=new int [N];
        front =-1;
        back=-1;
    }

    void push(int d){
        if(front==-1){
            front++;
            back++;
            arr[front]=d;
            return;
        }
        if(back==N-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=d;
    }

    void pop(){
        if(front==-1 || front>back){
                cout<<"NO Elements"<<endl;
                return ;
        }
        front++;
    }

    int peek(){
         if(front==-1 || front>back){
                cout<<"NO Elements"<<endl;
                return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back){
               
                return true;
        }
        return false;
    }

   
};

int main(){

    Queue sami;
    sami.push(1);
    cout<<sami.peek()<<endl;
    sami.pop();
    sami.push(2);
    cout<<sami.peek()<<endl;
    sami.pop();
    sami.push(3);
    cout<<sami.peek()<<endl;
    cout<<sami.empty()<<endl;
    sami.pop();
    cout<<sami.peek()<<endl;
    cout<<sami.empty()<<endl;

}