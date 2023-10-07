#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int add(int a, int b){
    int c = a+b;
    return c;
}

class Player{
    public:
    char* name;
    string data;
    int number;
};

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this-> data = d;
    }
};

vector<vector<int>> levelOrder(Node *root)
{
    
    queue<Node *> q;
    vector<vector<int>> vect;
    vector<int> v;
    q.push(root);
    q.push(NULL);
    Node *temp;
    while (!q.empty())
    {
        
        temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // cout << endl;
            vect.push_back(v);
            v.clear();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // cout << temp->data << endl;
            v.push_back(temp->data);
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
    return vect;
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

void printVector(vector<vector<int>> vect){
    int i = 0;
    while(!vect.empty()){
        vector<int> v = vect.at(i);
        int j =0;
        while(!v.empty()){

            cout<< v.at(j)<< " ";
            j++;
        }
        cout<< endl;
        i++;
    }
    
}

int main(void){
    // Player* p = new Player();  // dynamic memory allocation
    // Player* another = p;
    // p->data = "hariom";
    // cout<< another->data<< endl;
    // Node* root = new Node(1);
    // root = buildTree(root);
    // // 3 9 -1 -1 20 15 -1 -1 7 -1 -1
    // vector<vector<int>> vect  = levelOrder(root);
    // printVector(vect);


    // string s = "wreewfaga";
    // cout<< s.at(6)<< endl;
    // s.append("f");
    // return 0; 
    char x[] = "sample string";
    printf("%s", x + 4/2);
    return 0;
    // vector<int> v;
    // v.push_back(5);
    // sort(v.begin(), v.end());
    // int num = binary_search(v.begin(), v.end(), 5);
    // cout<<"Index is: " <<num<<endl;
    // cout<<v[0]<<endl;
    // return 0;

}

