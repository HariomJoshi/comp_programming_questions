#include<iostream>
#include<stdio.h>
#include<vector>
#include <bits/stdc++.h>

using namespace std;



class MyHashMap {
public:
    static vector<int> k;
    static vector<int> v;
    MyHashMap() {
        k.push_back(0);
        v.push_back(0);

    }
    
    void put(int key, int value) {
        auto it = find(k.begin(), k.end(), key);
        if(it != v.end()){ // if element already present
            int ind = it -k.begin();
            v[ind] = value;
        }else{ // if element not already present
            k.push_back(key);
            v.push_back(value);
        }
        
    }
    
    int get(int key) {
        auto it = find(k.begin(), k.end(), key);
        if(it == k.end()) return -1; // element not found
        else{  // element found
            int ind = it-k.begin();
            return v[ind];
        }
    }
    
    void remove(int key) {
        auto it = find(k.begin(), k.end(), key);
        if(it != k.end()){  // element found
            int ind = it - k.begin();
            for(int i = ind+1; i<v.size(); i++){
                k[i-1] = k[i];
                v[i-1] = v[i];
            }
            

        }
    }
};

int main(){
    MyHashMap* obj = new MyHashMap();
    obj->put(23, 1);
}
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */