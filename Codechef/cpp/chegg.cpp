#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    const string FILE_NAME = "midterm.txt";
    const int MAX = 3;
    string studentName, studentLevel, fileText;
    int score1, score2, score3, average, count, idx;
    ofstream outFS;
    ifstream inFS;


    outFS.open(FILE_NAME, ios::app);
    if (!outFS.is_open()) {
		cout << "could not open file midterm.txt for writing";
        return 1;
	}


    cout << "Enter the number of students: ";
    cin >> count;

    for(int i =1; i<=count; i++){
        cout<<"Enter the name for student "<<i<< ": ";
        cin>>studentName;
        cout<< "Enter "<< MAX << " scores for "<< studentName<< endl;
        cout<<"Score 1: ";
        cin>> score1;
        cout<<"Score 2: ";
        cin>> score2;
        cout<<"Score 3: ";
        cin>> score3;
        cout<< "The scores of "<< studentName << " are : "<< score1 << ", "<< score2<< ", "<< score3<< endl;
        int avg = (score1 + score2+ score3)/MAX;
        cout<< "The average is: "<< avg << endl;

        if(avg >= 90) studentLevel = "Excellent";
        else if(avg >=80) studentLevel = "Very good";
        else studentLevel = "";
        cout<< "Writing to file "<< FILE_NAME<< endl;
        
        string str = studentName + " : "+ to_string(avg) + " " + studentLevel;
        outFS<<str<< endl;

    }
    outFS.close();


	inFS.open(FILE_NAME, ios::in);
	if (!inFS) {
		cout << "could not open file "<< FILE_NAME<<" for reading";
        return 1;
	}


    cout << "\nHere are your students ..." << endl;


    char ch;
    while(1){
        if(inFS.eof()){
            break;
        }
        inFS>>ch;
        cout<< ch;
        
    }

    inFS.close();

    cout << "\nGoodbye" << endl;
    return 0;
}