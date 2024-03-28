#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;


// note that following function is basically a function for forming LPS array
// just change the signature to make function accept a vector as parameter and the 
// function will find lps for the given vector as well
// which can later be used in pattern searching

vector<int> z_function(string &s){
    int n = s.size();
    vector<int> arr(n, 0);
    arr[0] = 0;
    for(int i=1;i<n;i++){
        int temp = i;
        while(s[i] != s[arr[temp-1]] && arr[temp-1] !=0){
            temp = arr[temp-1];
        }
        // now temp is either at the first index or at the matching index
        // because these are the only two conditions of breaking the loop
        if(s[i]== s[arr[temp-1]]){
            arr[i] = arr[temp-1]+1;
        }else{
            arr[i] = 0;
        }
    }
    return arr;
}


int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        
    }
    return 0;
}