#include<iostream>

using namespace std;

class node{
    public:
    node* prev;
    node* next;
    int isbn, pages, price;
    string title, name;
    node(node* prev, node* next){
        this->prev = prev;
        this->next = next;
    }
    node(int isbn, int pages, int price, string title, string name){
        this->isbn = isbn;
        this-> pages = pages;
        this->price = price;
        this->title = title;
        this->name = name;
    }
    node(int isbn, int pages, int price, string title, string name, node* prev, node* next){
        this->isbn = isbn;
        this-> pages = pages;
        this->price = price;
        this->title = title;
        this->name = name;
        this->prev = prev;
        this->next = next;
    }
};


class bookstore{
    private:
        node* head;
        node* tail;
    public:

        bookstore(){
            head = NULL;
            tail = NULL;
        }

        void insertBeg(int isbn, int pages, int price, string title, string name){
            node* temp = new node(isbn, pages, price, title, name);

            if(head == NULL){
                head = temp;
                tail = temp;
            }else{
                temp-> next = head;
                temp->next->next = head->next;
                head = temp;
            }
            

        }
};



int main(){

}