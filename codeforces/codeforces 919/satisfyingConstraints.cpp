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
        int lb =INT_MIN, ub =INT_MAX;
        vi vect;
        while(n--){
            int a,x;
            cin>>a>>x;
            if(a==1){
                lb = max(lb, x);
            }else if(a==2){
                ub = min(ub, x);
            }else{
                vect.push_back(x);
            }
        }
        int m = vect.size();
        
        ll ans = ub-lb+1;
        for(int i=0;i<m;i++){
            if(vect[i]>= lb && vect[i]<= ub)ans--;
        }
        if(ans<0) ans =0;
        cout<< ans<< '\n';
        
    }
    return 0;
}