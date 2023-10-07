#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin); 
    int t;
    cin>>t;
    for(int i =1; i<=t; i++){
        int s,d,k;
        cin>>s>>d>>k;
        int b = 2*s + 2*d;
        int p = s+ 2*d;
        if(k+1<= b && k<=p)cout<< "Case #"<<i<<": YES"<<'\n';
        else cout<< "Case #"<<i<<": NO"<< '\n';
        
    }
    freopen("output.txt", "w", stdout);
    return 0;
}