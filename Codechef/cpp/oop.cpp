#include<iostream>
using namespace std;


class Employee{
    public:
    string name;
    int salary;

    
    Employee(){
     // default constructor   
    }

    Employee(string name, int salary, string secretPassword){
        this->name = name;
        this-> salary = salary;
        this-> secretPassword = secretPassword;
    }


    void printDetails(){
        cout<< "The name is : "<< this->name;
        cout<< "\nThe salary is: "<< this->salary;
        cout<< "\nThe secret Password is: "<< this-> secretPassword;  // this won't throw an error because we are using it inside the class
    }
    private:
    string secretPassword;
};


// inheritence in cpp
class Programmer: public Employee{
    public:
    int errors;
    Programmer(int errors){
        this-> errors = errors;
    }
};


int main(){
    Employee har;
    har.name = "Hariom";
    har.salary = 3000;
    har.printDetails();

    // Employee piy = Employee("Piyush", 3466);
    // above can also be done as follows
    Employee piy("Piyush", 24325, "dfja43234");
    piy.printDetails();
    // cout<< piy.secretPassword<< endl;  // will throw an error because secret password is private and only can be used within a class
    Programmer hari("Hariom", 23444, "afdak3434");
    // hari.name = "Hariom programmer";
    // hari.salary = 2345;
    hari.errors = 23;
    hari.printDetails();
    cout<< hari.errors<< endl;

    // cout<<"The name is: "<<  har.name<< "\nThe salary is: "<< har.salary<< endl;
    return 0;
}