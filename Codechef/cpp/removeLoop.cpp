#include<iostream>
#include<map>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(){
        // empty constructor
    }
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;  // just for understanding purposes 
        if(this-> next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout<< "Memory is freed for Node with data: "<< value<< endl;
    }

};

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            cout<< "Cycle is present"<< endl;
            return true;
        }
        // else
        visited[temp] = true;
        temp = temp->next;
        
    }
    return false; 
}

int main(){

}

