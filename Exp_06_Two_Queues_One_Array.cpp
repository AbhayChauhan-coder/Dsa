#include <iostream>
using namespace std;
#define MAX 10
class TwoQueues{int a[MAX],f1,r1,f2,r2,mid;public:TwoQueues():f1(-1),r1(-1),f2(-1),r2(MAX/2-1),mid(MAX/2){}
 void enq1(int x){if(r1==mid-1)cout<<"Queue 1 Overflow\n";else{if(f1==-1)f1=0;a[++r1]=x;}}
 void enq2(int x){if(r2==MAX-1)cout<<"Queue 2 Overflow\n";else{if(f2==-1)f2=mid;a[++r2]=x;}}
 void deq1(){if(f1==-1)cout<<"Queue 1 Underflow\n";else{cout<<a[f1++]<<" removed from Queue 1\n";if(f1>r1)f1=r1=-1;}}
 void deq2(){if(f2==-1)cout<<"Queue 2 Underflow\n";else{cout<<a[f2++]<<" removed from Queue 2\n";if(f2>r2)f2=r2=-1;}}
 void display(){cout<<"Queue 1: ";if(f1==-1)cout<<"Empty";else for(int i=f1;i<=r1;i++)cout<<a[i]<<" ";cout<<"\nQueue 2: ";if(f2==-1)cout<<"Empty";else for(int i=f2;i<=r2;i++)cout<<a[i]<<" ";cout<<endl;}};
int main(){TwoQueues q;int ch,x;do{cout<<"\n1.Enqueue Q1 2.Dequeue Q1 3.Enqueue Q2 4.Dequeue Q2 5.Display 0.Exit\nChoice: ";cin>>ch;switch(ch){case 1:cin>>x;q.enq1(x);break;case 2:q.deq1();break;case 3:cin>>x;q.enq2(x);break;case 4:q.deq2();break;case 5:q.display();break;}}while(ch!=0);return 0;}
