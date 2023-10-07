#include<iostream>
#include<vector>

using namespace std;

int main(){
    int length;
    int breadth;
    cin>> length;
    cin>> breadth;
    
    // cout<< length*breadth;

    int* ptr = &length;
    (*ptr)++;
    cout<< "Pointer: "<< *ptr<< endl;
    cout<< "length: " << length<< endl;
    int** ptr2 = &ptr;
    (**ptr2)++;
    cout<<"Pointer 2: "<< **ptr2<< endl;
    cout<< "length: " << length<< endl;

    vector<int> vect = {23, 43, 45, 64};
    for(auto num: vect){
        cout<<num<<endl;
    }


    return length*breadth;

    // whenever we make a pointer  to pointer we must dereference it as pointer to pointer
}

