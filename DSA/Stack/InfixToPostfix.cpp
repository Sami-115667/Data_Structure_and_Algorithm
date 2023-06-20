#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else if(op=='^')
    return 3;
    return 0;
}
string InfixToPostfix(string s){
    stack<char>c;
    string result;
    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        result+=s[i];
        else if(s[i]=='(')
        c.push(s[i]);
        else if(s[i]==')'){
            while(!c.empty()  && c.top()!='('){
                result+=c.top();
                c.pop();
            }

           
            c.pop();

        }
        else{
            while (!c.empty() && precedence(c.top())>=precedence(s[i])) {
                result+=c.top();
                c.pop();
            }
            c.push(s[i]);
        }
    }
    while(!c.empty()){
        result+=c.top();
        c.pop();
    }

    return result;
}

int main(){

    string s;
    cin>>s;

    cout<<InfixToPostfix(s)<<endl;

}