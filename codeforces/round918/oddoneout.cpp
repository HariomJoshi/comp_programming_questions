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
        int ans = a^b;
        ans ^=c;
        cout << ans << '\n';
    }
    return 0;
}