#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}


node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx = 0;
    if(start>end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    node* node1 = new node(curr);

    int pos = search(inorder,start,end,curr);
    node1->left = buildTree(preorder,inorder,start,pos-1);
    node1->right = buildTree(preorder,inorder,pos+1,end);

    return node1;
}

//// inorder printing 
void inorder1(node* root){
    if(root==NULL){
        return;
    }
    inorder1(root->left);
    cout<<root->data<<" ";
    inorder1(root->right);

}

int main(){
    int preorder [] = {1,2,4,3,5};
    int inorder [] = {4,2,1,5,3};

    // passing value
    node* root = buildTree(preorder,inorder,0,4);
    inorder1(root);
    return 0;

}