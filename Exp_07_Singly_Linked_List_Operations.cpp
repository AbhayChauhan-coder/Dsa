#include <iostream>
using namespace std;
struct Node{int data;Node* next;};
class LinkedList{Node* head;public:LinkedList():head(NULL){}
 void insertEnd(int x){Node* n=new Node{x,NULL};if(!head){head=n;return;}Node* p=head;while(p->next)p=p->next;p->next=n;}
 void insertBeginning(int x){Node* n=new Node{x,head};head=n;}
 void deleteValue(int x){if(!head){cout<<"List is Empty\n";return;}if(head->data==x){Node*t=head;head=head->next;delete t;cout<<x<<" deleted\n";return;}Node*p=head;while(p->next&&p->next->data!=x)p=p->next;if(!p->next)cout<<"Value not found\n";else{Node*t=p->next;p->next=t->next;delete t;cout<<x<<" deleted\n";}}
 void search(int x){Node*p=head;int pos=1;while(p){if(p->data==x){cout<<x<<" found at position "<<pos<<endl;return;}p=p->next;pos++;}cout<<"Value not found\n";}
 void display(){Node*p=head;while(p){cout<<p->data<<" -> ";p=p->next;}cout<<"NULL\n";}
 ~LinkedList(){while(head){Node*t=head;head=head->next;delete t;}}};
int main(){LinkedList l;int ch,x;do{cout<<"\n1.Insert at beginning 2.Insert at end 3.Delete 4.Search 5.Display 0.Exit\nChoice: ";cin>>ch;switch(ch){case 1:cin>>x;l.insertBeginning(x);break;case 2:cin>>x;l.insertEnd(x);break;case 3:cin>>x;l.deleteValue(x);break;case 4:cin>>x;l.search(x);break;case 5:l.display();break;}}while(ch!=0);return 0;}
