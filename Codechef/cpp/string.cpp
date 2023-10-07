#include<iostream>
using namespace std;

int main(){
    
    string name = "Hariom";
    cout<< "The name is: "<<name<< endl;
    cout<< "Length of Name is: "<< name.length()<< endl;
    cout<< "One substring is: "<< name.substr(0,2)<< endl;
    cout<< "another substring is: "<< name.substr(2,5)<< endl;
}