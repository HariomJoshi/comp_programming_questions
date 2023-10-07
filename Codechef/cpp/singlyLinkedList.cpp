#include<iostream>
#include<queue>
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

// detecting a loop
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            cout<< "Cycle is present at element: "<< temp-> data << endl;
            return true;
        }
        // else
        visited[temp] = true;
        temp = temp->next;
        
    }
    return false; 
}





// floyd cycle detection algo
Node* floydDetectLoop(Node* head){
    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow-> next;
        if(slow == fast){
            return slow;
        }
    }

    return NULL;
}
// inside the loop the distanc between slow pointer and fast pointer is being reduced
// with every iteration, so there will definitely be a time when both the pointers
// will be pointing to same node

Node* giveStartNode(Node* head){
    Node* right = floydDetectLoop(head);
    if(right == NULL) return NULL;
    Node* left = head;
    while(right != left){
        right = right -> next;
        left = left-> next;
    }
    // cout<< right-> data<< endl;
    return right; // or left
    
}


void removeLoop(Node* head){
    Node* loopStarts = giveStartNode(head);
    Node* temp = loopStarts->next;
    while(temp-> next != loopStarts){
        temp = temp-> next;
    }
    temp-> next = NULL;
    cout<< "The loop has been removed! "<< endl;

}






void insertAtHead(Node* &Head, int data){  // if we would have passed just head instead of &head (reference),
// so function would have recieved a copy of head, not the original one
// here we want to change the original head, so we took the reference of orginal head;

    //empty List
    if(Head == NULL){
        Node* temp = new Node(data);
        Head = temp;
    }else{
        // new Node creation
        Node* temp = new Node(data);
        temp->next = Head;
        Head = temp;
    }
}


void insertAtTail(Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
    }else{
        Node* temp = new Node(data);
        tail-> next = temp;
        tail = tail->next;
    }
    
}

void printList(Node* head){
    Node* temp = head;
    int i=0;
    while(temp != NULL){
        cout<<"Node "<< i<< ": "<< temp-> data<<endl;
        i++;
        temp = temp->next;
    }
}

// Deleting any node
void deleteNode(int position, Node* &head){
    if(position ==1){
        Node* temp = head;
        head = head->next;
        // freeing the memory
        temp-> next = NULL;     
        // without making this NULL if we try to free up the memory so we will get error
        // since we are trying to delete an object that is pointing to someone
        // therefore, it is necessary to make the element to be deleted point to NULL
        delete temp;
    }else{
        Node* temp = head;
        for(int i =1; i< position-1; i++){
            temp = temp->next;
        }
        Node* n = temp->next;
        temp->next = temp->next->next;
        // freeing the memory
        n-> next = NULL;
        delete n;
    }
}



int main(){
    int a = 3;
    int* num = &a;

    Node* head = new Node(17);  // node1 is a pointer pointing to a new node
    Node* tail = head;
    cout<< "Old: "<< endl;
    // printList(head);
    insertAtHead(head, 4);
    insertAtTail(tail, 45);
    insertAtTail(tail, 7);
    insertAtTail(tail, 89);
    insertAtTail(tail, 999);
    printList(head);

    // making the loop in the linked list
    tail -> next = head -> next; 
    if(detectLoop(head)){
        cout<< "Cycle present"<< endl;
    }else{
        cout<< "No Cycle is present"<< endl;
    }

    Node* cycle = giveStartNode(head);
    cout<<"The loop is starting from: "<<  cycle-> data<< endl;
    removeLoop(head);
    // cout<< "New: "<< endl;
    printList(head);

    // deleteNode(2, head);
    // cout<<"After deleting"<< endl;
    // printList(head);
    return 0;
}

/*
Advantage of linked list
1. Grow and shrink at real time
2. Easy insertion and deletion
3. Not contiguous
*/

/*
Working of a linked list
1. Next is a pointer which is storing the adress of next node
2. Whenever you want to acess the value of any node you have to acess it by iterating one by one
through the pointers
3. Head -> a pointer which always depicts the first node
4. Tail -> a pointer which always depicts the last node
*/

/*
IMPORTANT NOTE: Making everything a pointer in C++ means we are referring to an object at memory
This is not done in JAVA because in JAVA everything is by default a pointer
*/