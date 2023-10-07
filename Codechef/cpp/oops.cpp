#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string.h>
#include "Hero2.cpp"

using namespace std;

class Hero{
    
    // properties
    private:
    // char name[100];
    int health;
    char level;
    char* name;
    

    public:
    static int timeToComplete; 
    Hero(){
        cout<< "Constructor called"<< endl;
        name = new char[100];
    }

    Hero(int health, char level){
        this-> health = health;
        this-> level = level;
    }

    // // copy constructor (shallow copy)
    // Hero(Hero& obj){

    //     this->name= obj.name;
    //     this->health = obj.health;
    //     this-> level = obj.level;
    // }

    // deep copy
    Hero(Hero& obj){
        char *ch = new char[strlen(obj.name) + 1];
        strcpy(ch, obj.name);
        this->name= ch;
        this->health = obj.health;
        this-> level = obj.level;
    }


    // destructor 
    ~Hero(){
        cout<< "Destructor being called: "<< endl;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int health){
        this->health = health;
    }



    char getLevel(){
        return level;
    }
    void setLevel(char level){
        this-> level = level;
    }

    void print(){
        cout<< health<< endl;
        cout<< level<< endl;
    }

    static int random(){
        // return health;// will not work since health is not static
        cout<< "Static Random function being called: "<< endl;
        return timeToComplete;
    }

};


int Hero::timeToComplete = 23;  // syntax to initialize constructor
int main(){

    // Hero hariom(23, 'a');
    // Hero dugtal(hariom);
    // Hero heeraLaal(54, 'h');
    // cout<< dugtal.getHealth()<< endl;  // as you can see all the values have been copied
    // hariom = heeraLaal; // copies all the heeraLaal objects to Hariom
    // cout<< "Hariom Details : "<< endl;
    // hariom.print();
    // cout<< "heeraLaal Details: "<<endl;
    // heeraLaal.print();

    // destructor
    // used to deallocate a memory, when object is out of scope
    
    // static
    Hero h1;
    // dynamic
    Hero* h2 = new Hero();
    // dynamic objects we have to call destructor manually
    delete h2;


    // whenver you need to acess static variables you can do it as follows
    cout<<Hero::timeToComplete<<endl;  // we didn't even created the object of the class and can acess the variable
    // this is the speciality of static variables

    Hero a;
    cout<< a.timeToComplete<< endl;
    // this also work fine, but is not recommended because static keywords does not belong to objects
    // static keywords belong to class

    cout<< Hero::random()<< endl;





    // // static allocation
    // Hero ramesh;  // created an object of type hero

    // // dynamic allocation
    // Hero *hari = new Hero;
    // (*hari).setHealth(23);
    // (*hari).setLevel('d');
    // cout<< "Hari Health: "<< hari->getHealth()<< endl;
    // cout<< "Hari level: "<< (*hari).getLevel()<< endl;
    // // the memory must be allocated in heap

    // ramesh.setHealth(43);
    // ramesh.setLevel('c');

    // cout<< "Health: "<< ramesh.getHealth()<< endl;
    // cout<< "Level: "<< ramesh.getLevel()<< endl;

    // cout<< "Size: "<< sizeof(ramesh)<< endl;
    // ramesh.print();
    // return 0;
}