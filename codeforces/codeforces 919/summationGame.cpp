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
        int n,k,x;
        cin>>n>>k>>x;
        vi v(n,0);
        int sum =0;
        for(int i=0;i<n;i++){
            cin>> v[i];
            sum+=v[i];
        }
        sort(v.begin(), v.end());
        int sub =0;
        for(int i=n-1;i>n-1-x;i--){
            sub+= 2*v[i];
        }
        
        int ans = sum-sub;
        // cout<< "ANS :"<< ans<< endl;
        int idx = n-1, to = max(-1, n-x-k-1);
        int i;
        for(i=n-x-1;i>to;i--){
            // cout<< "ANS: "<<ans<< endl;
            sub+= 2*v[i];
            sub-= 2*v[idx];
            sum-=v[idx];
            ans = max(ans, sum-sub);
            idx--;
            k--;

        }
        while(idx>i && k>0){
            ans+= v[idx];
            idx--;
            k--;
        }
        // last case when we have to shorten current array


        cout<< ans<< '\n';

    }
    return 0;
}