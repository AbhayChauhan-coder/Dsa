#include <iostream>
using namespace std;
struct Node{int data;Node* next;};
class LinkedList{Node* head;public:LinkedList():head(NULL){}
 void insertEnd(int x){Node*n=new Node{x,NULL};if(!head){head=n;return;}Node*p=head;while(p->next)p=p->next;p->next=n;}
 void reverse(){Node*prev=NULL;Node*curr=head;while(curr!=NULL){Node*next=curr->next;curr->next=prev;prev=curr;curr=next;}head=prev;}
 void display(){Node*p=head;while(p){cout<<p->data<<" -> ";p=p->next;}cout<<"NULL\n";}
 ~LinkedList(){while(head){Node*t=head;head=head->next;delete t;}}};
int main(){LinkedList list;list.insertEnd(10);list.insertEnd(20);list.insertEnd(30);list.insertEnd(40);cout<<"Original List: ";list.display();list.reverse();cout<<"Reversed List: ";list.display();return 0;}
