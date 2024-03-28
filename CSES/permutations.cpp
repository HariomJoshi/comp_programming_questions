#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    if(t>1&& t<4){
        cout<< "NO SOLUTION"<< endl;
        return 0;
    }
    int n = t/2;
    int num =2;
    for(int i=0;i<n;i++){
        cout<< num<< " ";
        num+=2;
    }
    num = 1;
    for(int i=0;i<t-n;i++){
        cout<< num<< " ";
        num+=2;
    }
    
    return 0;
}