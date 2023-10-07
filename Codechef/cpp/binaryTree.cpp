#include<iostream>
#include<queue>


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

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL); // first level is completed
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<< temp-> data<< " ";
            if(temp-> left != NULL){
                q.push(temp-> left);
            }
            if(temp-> right != NULL){
                q.push(temp-> right);
            }
        }


    }
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    //LVR
    inorder(root->left);
    cout<< root-> data<< " ";
    inorder(root-> right);
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    //VLR
    cout<< root-> data<< " ";
    preorder(root->left);
    preorder(root-> right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    //LRV
    postorder(root->left);
    postorder(root-> right);
    cout<< root-> data<< " ";
    
}


Node* buildFromLevelOrder(Node* root){
    
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


int  main(){
    Node* root = NULL;
    root = buildTree(root);
    // string to build tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    
    cout<< "Output of level order traversal: "<< endl;
    levelOrderTraversal(root);
    cout<< "Inorder: ";
    inorder(root);
    cout<< endl;


    cout<< "Preorder: ";
    preorder(root);
    cout<< endl;

    cout<< "Postorder: ";
    postorder(root);
    cout<< endl;
    
}