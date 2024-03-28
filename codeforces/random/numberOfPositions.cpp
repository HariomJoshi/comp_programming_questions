#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b;
    cin>>n>>a>>b;
    if(a+b< n){
        cout<< b+1<<'\n';
    }else if(a+b ==n){
        cout<<b<<'\n';
    }else{
        cout<<n-a<<'\n';
    }
    return 0;
}