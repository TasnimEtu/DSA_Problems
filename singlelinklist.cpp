#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int k){
    val=k;
    next=nullptr;
    }
};
class List{
public:
    Node* start=nullptr;
    void ins(int k){
    Node* n=new Node(k);
    if(start==nullptr){
        start=n;
    }
    else{
        Node* p=start;
        while(p->next!=nullptr){
            p=p->next;
        }
        p->next=n;
    }
    }
    void insfirst(int k){
    Node* n=new Node(k);
    if(start==nullptr){
        start=n;
    }
    else{
        n->next=start;
        start=n;
    }

    }
    void deleteFirst(){
    start=start->next;
    }
    void deleteLast(){
    Node* j=start;
    while(j->next->next!=nullptr){
        j=j->next;
    }
    j->next=nullptr;

    }
    void traverse(){
    Node* p=start;
    while(p!=nullptr){
        cout<<p->val<<"\t";
        p=p->next;
    }
    cout<<endl;
    }

};
int main(){
List t;
int n,x;
cout<<"Enter the number of nodes:";
cin>>n;
cout<<"Enter"<<"  "<< n<<"  "<<"Values:";
for(int i=0;i<n;i++){
    cin>>x;
    t.ins(x);
}
cout<<"Original list:";
t.traverse();
cout<<"Insert at first:";
cin>>x;
t.insfirst(x);
cout<<"After inserting at first:";
t.traverse();
t.deleteFirst();
cout<<"After delete first:";
t.traverse();
t.deleteLast();
cout<<"After delete last:";
t.traverse();

}
