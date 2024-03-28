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
        int n;
        cin>>n;
        vector<int> a(n,0);
        ll sum =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll target = sum/n;
        ll sm = 0;
        bool ans = true;
        for(int i=n-1;i>=0;i--){
            sm+=a[i];
            // cout<< "avg "<< sm/(n-i)<< endl;
            if(ceil((double)sm/(n-i))> target){
                ans = false;
                break;
            }
        }
        if(ans) cout<< "YES"<< '\n';
        else cout<< "NO"<< '\n';

    }
    return 0;
}