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
        ll n,k;
        cin>>n>>k;
        if(k<= 4*n-4){
            if(k%2==1) k = k/2+1;
            else k = k/2;
            cout<< k<<'\n';
        }else{   
            if(k%2==1) k =2*n-1;
            else k = 2*n;
            cout<<k<<'\n';
        }
    }
    return 0;
}