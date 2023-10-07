#include<iostream>
using namespace std;

int main(){
    int a = 32;
    int *ptr;
    ptr = &a;
    cout<< ptr<< endl;
    cout<< *ptr<< endl;
    cout<< "The value of a is: "<< a<< endl;
    cout<< "The value of pointer is: "<< *ptr<< endl;
    cout<< "The adress of a is: "<< &a<< endl;
    cout<< "The adress of pointer is: "<< ptr<< endl;
    // now you can see that the value of adress and the value itself both are same

}