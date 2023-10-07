#include<iostream>
using namespace std;

int main(){
    int a;
    cout<< "Enter  a number: ";
    cin>> a;
    cout<<a<< endl;

    switch (a)
    {
    case 23:
        cout<< "You are eligible" << endl;
        break;

    case 42:
        cout<< "You are not eligible"<< endl;
        break;
    
    default:
        cout<< "you don't fall in either category"<< endl;
        break;
    }
    int number;
    cin>> number;
    int index =0;
    while(index < number){
        cout<< "We are at index: "<< index<< endl;
        index++;
    }

    for(int i=0; i< 23; i++){
        cout<< "We are at index: "<< i<< endl;
    }
    return a;
}
