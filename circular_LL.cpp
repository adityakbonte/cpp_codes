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

void deleteAtHead(node* &head){
    node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    node* todelete = head;
    temp->next = head->next;
    head = head->next;

    delete todelete; 
}

void deletion(node* &head,int pos){

    if(pos = 1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count =1 ;
    while(count != pos-1){
          temp = temp->next;
          count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

}

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertattail(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void display(node* head){
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    
    cout<<endl;
}

int main(){

    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}