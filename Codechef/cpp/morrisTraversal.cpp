#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this-> data = d;
    }
};


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



// In this we have to traverse the tree in O(1) complexity
// the main problem in front of us is that how to go back
// so make temorary links to go back 
Node* predecessor(Node* root){
    Node* temp = root->left;
    while(temp-> right != root && temp-> right != NULL){
        temp = temp->right;
    }
    return temp;
}

int main(){

    Node* root = buildTree(root);  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // 1 2 3 -1 -1 4 -1 -1 5 -1 6 -1 -1
    while(root!= NULL){ 
    

        if(root-> left == NULL){
            cout<< root->data<<" ";
            root = root->right;
        }else{
            // finding the predecessor as curr
            Node* curr = root->left;
            while(curr-> right != root && curr-> right!= NULL){
                curr = curr->right;
            }


            if(curr->right == root){
                
                curr->right = NULL;
                root = root-> right;
            }else{
                cout<< root->data<< " ";
                curr-> right = root;
                root = root->left;
            }
            
            
        }
    }

}