#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        if(k> min(a,b)/2){
            cout<< "NO"<< '\n';
            continue;
        }   
    }
    return 0;
}