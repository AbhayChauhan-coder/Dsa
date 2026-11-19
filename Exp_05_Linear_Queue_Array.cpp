#include <iostream>
using namespace std;
#define MAX 5
class Queue{int q[MAX],front,rear;public:Queue():front(-1),rear(-1){}
 void enqueue(int x){if(rear==MAX-1){cout<<"Queue Overflow\n";return;}if(front==-1)front=0;q[++rear]=x;cout<<x<<" inserted\n";}
 void dequeue(){if(front==-1||front>rear){cout<<"Queue Underflow\n";return;}cout<<"Deleted: "<<q[front++]<<endl;if(front>rear)front=rear=-1;}
 void display(){if(front==-1){cout<<"Queue is Empty\n";return;}cout<<"Queue: ";for(int i=front;i<=rear;i++)cout<<q[i]<<" ";cout<<endl;}};
int main(){Queue q;int ch,x;do{cout<<"\n1.Enqueue 2.Dequeue 3.Display 0.Exit\nChoice: ";cin>>ch;switch(ch){case 1:cout<<"Value: ";cin>>x;q.enqueue(x);break;case 2:q.dequeue();break;case 3:q.display();break;}}while(ch!=0);return 0;}
