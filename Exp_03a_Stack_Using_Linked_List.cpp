#include <iostream>
using namespace std;
struct Node { int data; Node* next; };
class LinkedStack {
    Node* top;
public:
    LinkedStack():top(NULL){}
    void push(int x){Node* p=new Node; p->data=x; p->next=top; top=p; cout<<x<<" pushed\n";}
    void pop(){if(!top){cout<<"Stack Underflow\n";return;} Node* t=top; cout<<"Popped: "<<t->data<<endl; top=top->next; delete t;}
    void peek(){if(!top) cout<<"Stack is Empty\n"; else cout<<"Top Element: "<<top->data<<endl;}
    bool isEmpty(){return top==NULL;}
    void display(){if(isEmpty()){cout<<"Stack is Empty\n";return;} cout<<"Stack (top to bottom): "; for(Node* p=top;p;p=p->next) cout<<p->data<<" "; cout<<endl;}
    ~LinkedStack(){while(top){Node* t=top;top=top->next;delete t;}}
};
int main(){LinkedStack s;int ch,x;do{cout<<"\n1.Push 2.Pop 3.Peek 4.Display 0.Exit\nChoice: ";cin>>ch;switch(ch){case 1:cout<<"Value: ";cin>>x;s.push(x);break;case 2:s.pop();break;case 3:s.peek();break;case 4:s.display();break;}}while(ch!=0);return 0;}
