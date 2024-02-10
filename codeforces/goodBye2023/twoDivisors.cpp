#include <bits/stdc++.h>

using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        long long a,b;
        cin>> a>>b;
        long long h = __gcd(a,b);
        long long l = (a*b)/h;
        if(l == a || l==b){
            int big = (a>b)? a:b;
            int small = (a<b)?a:b;
            cout<< l*(big/small)<< '\n';
        }else{
            cout<< l<< '\n';
        }
         


    }
    return 0;
}