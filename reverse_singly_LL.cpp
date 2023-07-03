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

node* reverse(node* &head){
    node* preptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = preptr;

        preptr = currptr;
        currptr = nextptr;

    }
    return preptr;
}

node* reverserecursive(node* &head){
    if(head == NULL || head->next==NULL){
        return head;
    }

    node* newhead = reverserecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
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
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    
    node* newreversehead = reverserecursive(head);
    display(newreversehead);
    return 0;
}