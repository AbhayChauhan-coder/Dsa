#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;
int precedence(char op){if(op=='^')return 3;if(op=='*'||op=='/')return 2;if(op=='+'||op=='-')return 1;return 0;}
string infixToPostfix(const string& exp){stack<char> st;string out;
 for(char c:exp){if(isalnum(static_cast<unsigned char>(c)))out+=c;
 else if(c=='(')st.push(c);
 else if(c==')'){while(!st.empty()&&st.top()!='('){out+=st.top();st.pop();}if(!st.empty())st.pop();}
 else if(c==' '||c=='\t')continue;
 else {while(!st.empty()&&st.top()!='('&&(precedence(st.top())>precedence(c)||(precedence(st.top())==precedence(c)&&c!='^'))){out+=st.top();st.pop();}st.push(c);}}
 while(!st.empty()){if(st.top()!='(')out+=st.top();st.pop();}return out;}
int main(){string exp;cout<<"Enter infix expression: ";getline(cin,exp);cout<<"Postfix expression: "<<infixToPostfix(exp)<<endl;return 0;}
