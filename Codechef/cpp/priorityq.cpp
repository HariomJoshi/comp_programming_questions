#include<iostream>
#include<queue>

using namespace std;
int main(){
    priority_queue<int> pMax;  // max heap
    priority_queue<int, vector<int>, greater <int>> pMin;   // min heap


    pMax.push(2);
    pMax.push(5);
    pMax.push(265);
    pMax.push(654);
    pMax.push(4);

    cout<< pMax.top()<< endl;
    pMax.pop();
    cout<< pMax.top()<< endl;
}