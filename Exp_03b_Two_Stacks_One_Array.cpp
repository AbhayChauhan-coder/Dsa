#include <iostream>
using namespace std;
class TwoStacks {
    int *a, size, top1, top2;
public:
    TwoStacks(int n):size(n),top1(-1),top2(n){a=new int[n];}
    void push1(int x){if(top1+1==top2) cout<<"Stack Overflow\n";else a[++top1]=x;}
    void push2(int x){if(top1+1==top2) cout<<"Stack Overflow\n";else a[--top2]=x;}
    void pop1(){if(top1==-1) cout<<"Stack 1 Underflow\n";else cout<<"Popped from Stack 1: "<<a[top1--]<<endl;}
    void pop2(){if(top2==size) cout<<"Stack 2 Underflow\n";else cout<<"Popped from Stack 2: "<<a[top2++]<<endl;}
    void peek1(){if(top1==-1)cout<<"Stack 1 Empty\n";else cout<<a[top1]<<endl;}
    void peek2(){if(top2==size)cout<<"Stack 2 Empty\n";else cout<<a[top2]<<endl;}
    void display(){cout<<"Stack 1: ";for(int i=top1;i>=0;i--)cout<<a[i]<<" ";cout<<"\nStack 2: ";for(int i=top2;i<size;i++)cout<<a[i]<<" ";cout<<endl;}
    ~TwoStacks(){delete[] a;}
};
int main(){int n,ch,x;cout<<"Enter array size: ";cin>>n;TwoStacks s(n);do{cout<<"\n1.Push1 2.Pop1 3.Peek1 4.Push2 5.Pop2 6.Peek2 7.Display 0.Exit\nChoice: ";cin>>ch;switch(ch){case 1:cin>>x;s.push1(x);break;case 2:s.pop1();break;case 3:s.peek1();break;case 4:cin>>x;s.push2(x);break;case 5:s.pop2();break;case 6:s.peek2();break;case 7:s.display();break;}}while(ch!=0);return 0;}
