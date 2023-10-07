#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<queue>

using namespace std;

class Fun{
    int* arr;
public:
    Fun(int k){
        arr = new int(k);
    }

    void add(int index, int num){
        arr[index] = num;
    }

    void print(){
        for(int i =0; i< sizeof(arr); i++){
            cout<< arr[i]<< endl;
        }
    }
};

int main(){
    Fun func(3);
    func.add(2, 6);
    func.print();
    unordered_map<string, int> ans;
    ans["har"] = 23;
    ans["jos"] = 43;

    ans.insert

    return 0;
}