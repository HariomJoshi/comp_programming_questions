#include<iostream>
#include<queue>
#include<vector>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int findHeight(struct Node* root){
    if(root == NULL){
        return 0;
    }

    int left = findHeight(root-> left);
    int right = findHeight(root-> right);
    return max(left, right)+1;
}


Node* buildTree(Node* root){
    int data;
    cin>> data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }

    cout<< "Enter data for inserting in Left of " <<root->data<< ": "<< endl;
    root-> left = buildTree(root-> left);
    cout<< "Enter data for inserting in right of " <<root->data<< ": "<< endl;
    root-> right = buildTree(root-> right);
    return root;
}

int diameterOfTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int op1 = diameterOfTree(root-> left);
    int op2 = diameterOfTree(root->right);
    int op3 = findHeight(root-> left) + findHeight(root-> right) +1;
    return max(op1, max(op2, op3));
}


int main(){
    
    Node* root = new Node(11);
    buildTree(root);
    int num = findHeight(root);
    // 11 7 2 7 -1 -1 -1 3 -1 -1 3 6 -1 -1 -1 
    cout<< "Height: "<< num<< endl;
    return 0;
}