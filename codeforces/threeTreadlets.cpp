#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int a,b,c;
        cin>>a>>b>>c; 
        if(a==b && b==c){
            cout<< "YES"<< '\n';
            continue;
        }
        int m = min(a, min(b,c));
        if(a%m != 0 || b%m != 0 || c%m != 0){
            cout<< "NO"<< '\n';
            continue;
        }
        int n =0;
        if(a == m){
            n+= c/m-1;
            n+= b/m-1;
        }else if(b == m){
            n+= a/m-1;
            n+= c/m-1;
        }else{
            n+= a/m-1;
            n+= b/m-1;
        }
        if(n>3) cout<< "NO"<< endl;
        else cout<< "YES"<< endl;


    }
    return 0;
}