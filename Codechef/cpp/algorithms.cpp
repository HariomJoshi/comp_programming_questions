#include<iostream>
#include<algorithm>
#include<vector>



using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(3);
    v.push_back(4);
    v.push_back(12);
    cout<< "Unsorted"<< endl;
    for(int i: v){
        cout<< i<<endl;
    }
    cout<< "Sorted"<< endl;
    sort(v.begin(), v.end());
    for(int i: v){
        cout<< i<<endl;
    }


    cout<< v[3]<< endl;
    cout<< v.at(3)<< endl;
    cout<< binary_search(v.begin(), v.end(), 5)<< endl;

    int a =3;
    int b =6;
    cout<< "a->" <<a << " b-> "<< b<<endl;
    swap(a,b);
    cout<< "a->" <<a << " b-> "<< b<<endl;

    string s ="Hariom";
    reverse(s.begin(), s.end());
    cout<< s<< endl;  // the string has been reversed

    // is we want to rotate the above vector
    cout<< "before"<< endl;
    for(int i: v){
        cout<< i<<endl;
    }
    rotate(v.begin(), v.begin()+2, v.end());
    cout<<"after"<< endl;
    for(int i: v){
        cout<< i<<endl;
    }

    //upper bound and lower bound gives and iterator
    // Iterator - an object like a pointer that points to an object in the container
    cout<< "Upper Bound: ";
    cout<< upper_bound(v.begin(), v.end(), 9) -v.begin()<< endl; // here we have just subtracted it with v.begin() to dereference it
    cout<< "Lower Bound: ";
    cout<< *lower_bound(v.begin(), v.end(), 9) << endl;  // here we have used * operator to dereference it
}