
#include<iostream>

using namespace std;

int main(){
    int number = 32;
    // adress of operator - &
    cout<< "adress of number is "<< &number << endl;
    // pointer stores the adress
    
    int *ptr = &number;  // we created a pointer ptr and stored the adress for number
    cout<< *ptr<< endl;  // *ptr gives us the value of the adress stored in ptr

    int temp = number;
    temp++;
    cout<< "Temp: " << temp << endl;
    cout<< "Number: " << number << endl;
    (*ptr)++;
    cout<< "Adress: " << ptr<< endl;
    cout<< "Pointer: " << *ptr<< endl;
    cout<< "Number: " << number<< endl;

    // copying a pointer
    int *ptr2 = ptr;
    cout<< ptr2<< endl;
    cout<< "Value: " << *ptr2<< endl;

    cout<<"Hariom"<< endl;
}