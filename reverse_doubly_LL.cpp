#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

node* reverse(node* &head){
    node* ptr1 = head;
    node* ptr2 = ptr1->next;

    ptr1->next = NULL;
    ptr1->prev = ptr2;

    while(ptr2!=NULL){
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;
    return head;
}

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"_";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtHead(head,10);
    insertAtHead(head,9);
    insertAtHead(head,8);
    display(head);
    node* newhead = reverse(head);
    display(newhead);

    return 0;
}


