#include <iostream>
using namespace std;
#define MAX 5
class ArrayStack {
    int arr[MAX], top;
public:
    ArrayStack() : top(-1) {}
    void push(int x) { if(top==MAX-1) cout<<"Stack Overflow\n"; else { arr[++top]=x; cout<<x<<" pushed\n"; } }
    void pop() { if(top==-1) cout<<"Stack Underflow\n"; else cout<<"Popped: "<<arr[top--]<<endl; }
    void peek() { if(top==-1) cout<<"Stack is Empty\n"; else cout<<"Top Element: "<<arr[top]<<endl; }
    bool isEmpty() { return top==-1; }
    void display() { if(isEmpty()) {cout<<"Stack is Empty\n";return;} cout<<"Stack (top to bottom): "; for(int i=top;i>=0;i--) cout<<arr[i]<<" "; cout<<endl; }
};
int main(){ ArrayStack s; int ch,x; do { cout<<"\n1.Push 2.Pop 3.Peek 4.Display 0.Exit\nChoice: "; cin>>ch; switch(ch){case 1:cout<<"Value: ";cin>>x;s.push(x);break;case 2:s.pop();break;case 3:s.peek();break;case 4:s.display();break;} }while(ch!=0); return 0; }
