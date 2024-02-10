#include <bits/stdc++.h>
using namespace std;

int diffStr(string str, unordered_set<string> &set, int n){
    if(n==1){
        if(set.find(str)== set.end()){
            set.insert(str);
            return 1;
        }
        else return 0;
    }  // base case
    int count=0;
    if(set.find(str)!= set.end())return 0;
    else{
        set.insert(str);
        count++;
    }
    
    if(str[0] == str[1]){
        count += diffStr(str.substr(1,n-1), set, n-1);
    }else{
        string s = str[0] + str.substr(2, n-2);
        count += diffStr(s, set, n-1) + diffStr(str.substr(1,n-1), set, n-1);  
    }
    return count;

}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        string str;
        cin>> str;
        // input ready
        unordered_set<string> set;
        cout<< diffStr(str, set, n)<< endl;
    }
    return 0;
}