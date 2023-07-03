#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertattail(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void DeleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void DeleteAtAnyPosition(node* &head,int val){

    if(head = NULL){
        return;
    }
    if(head->next=NULL){
        DeleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}



void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"_";
        temp = temp->next;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    node* head = NULL;
    insertattail(head,2);
    // insertattail(head,3);
    // insertattail(head,4);
    display(head);
    // insertAtHead(head,1);
    // display(head);

    cout<<search(head,1)<<endl;

    DeleteAtAnyPosition(head,2);
    display(head);
    // DeleteAtHead(head);
    // display(head);
    return 0;
}