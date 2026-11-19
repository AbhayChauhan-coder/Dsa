#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;
int evaluatePostfix(const string& exp){stack<int> st;for(char c:exp){if(c==' ')continue;if(isdigit(static_cast<unsigned char>(c)))st.push(c-'0');else{if(st.size()<2)throw "Invalid postfix expression";int b=st.top();st.pop();int a=st.top();st.pop();switch(c){case '+':st.push(a+b);break;case '-':st.push(a-b);break;case '*':st.push(a*b);break;case '/':if(b==0)throw "Division by zero";st.push(a/b);break;default:throw "Unsupported operator";}}}if(st.size()!=1)throw "Invalid postfix expression";return st.top();}
int main(){string exp;cout<<"Enter postfix expression (single-digit operands): ";getline(cin,exp);try{cout<<"Result = "<<evaluatePostfix(exp)<<endl;}catch(const char* e){cout<<e<<endl;}return 0;}
