#include<iostream>

using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;
    
    TrieNode(char ch){
        this->data = ch;
        for(int i =0; i<26; i++){
            children[i] = NULL;
        }
        this-> isTerminal = false;  
    }
};

class Trie{
    public:

    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }



    bool searchUtil(TrieNode* root, string word){
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child; 
        // present
        if(root->children[index] != NULL){
            child = root->children[index];
        }else{
            return false;
        }
        // recursive call
        return searchUtil(child, word.substr(1));

    }

    void insertUtil(TrieNode* root, string word){
        // BASE CASE
        if(word.length()== 0){
            root->isTerminal = true;
            return;
        }

        // assumption, word will be in CAPS
        int index = word[0] - 'A';
        TrieNode* child;

        if(root -> children[index] != NULL){  // is present
            child = root -> children[index];
        }
        else{ // absent
            child = new TrieNode(word[0]);
            root -> children[index] = child;

        }

        //RECURSIVE CALL
        insertUtil(child, word.substr(1));
    }

    void removeUtil(TrieNode* root, string word){
        // base case
        if(word.size() == 0){
            root->isTerminal = false;
            return;
        }
        int index = word[0] -'A';
        TrieNode* child;
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }else{// absent
            cout<< "Element Not Present: "<< endl;
            return;
        }
        removeUtil(child, word.substr(1));
    }


    void insertWord(string word){
        insertUtil(root, word);
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    void removeWord(string word){
        removeUtil(root, word);
    }
};      



int main(){
    Trie* t = new Trie();
    t-> insertWord("ABCD");     
    cout<< "Present or Not: "<< t->searchWord("ABCD")<<endl;
    t-> removeWord("ABCD");
    cout<< "Present or Not: "<< t->searchWord("ABCD")<<endl;
    return 0;
}