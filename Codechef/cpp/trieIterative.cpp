#include<iostream>

using namespace std;

class Node{
    public:
    char data;
    Node* children[26];
    bool isTerminal;

    Node(char ch){
        data = ch;
        for(int i = 0;i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public: 

    Node* root;
    Trie(){
        root = new Node('\0');
    }

    void insert(string word){
        Node* temp = root;
        while(!word.empty()){
            int index= word[0]-'a';
            if(temp ->children[index] == NULL){
                temp->children[index] = new Node(word[0]);
            }
            temp = temp ->children[index];
            word = word.substr(1);
        }
        temp->isTerminal = true;
    }

    bool search(string word){
        Node* temp = root;
        while(!word.empty()){
            int index = word[0] -'a';
            if(temp->children[index]== NULL){
                return false;
            }
            temp = temp->children[index];
            word = word.substr(1);
        }
        return temp->isTerminal;
    }

    bool startsWith(string prefix){
        Node* temp = root;
        while(!prefix.empty()){
            int index = prefix[0] -'a';
            if(temp->children[index]== NULL){
                return false;
            }
            temp = temp->children[index];
            prefix = prefix.substr(1);
        }
        return true;
    }

};


int main(){
    Trie *t = new Trie();
    t->insert("hariom");
    cout<< "Present or Not: "<<  t->search("hariom")<<endl;
    cout<< "Present or Not: "<<  t->search("Hariom")<<endl;
    cout<< "Prefix or not: "<<  t->startsWith("har")<<endl;


}