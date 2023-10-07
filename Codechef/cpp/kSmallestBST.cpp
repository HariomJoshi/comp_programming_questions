#include<iostream>
#include<utility>


// NOT SOLVED YET
// https://practice.geeksforgeeks.org/problems/sum-of-k-smallest-elements-in-bst3029/1
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

pair<int, int> sum(Node* root, int k){
    if(root == NULL){
        pair<int, int> pair(0, 0);
        return pair;
    }
    pair<int, int> pair2(sum(root->left, k).first + sum(root->right, k).first+ root->data, 0);
    return pair2;
    
}


int main(){
    // 3 9 -1 -1 20 15 -1 -1 7 -1 -1
    Node* root = new Node(0);
    root = buildTree(root);
    int s;
    s = sum(root, 3).first;
    cout<<"Sum: " << s << endl;

}