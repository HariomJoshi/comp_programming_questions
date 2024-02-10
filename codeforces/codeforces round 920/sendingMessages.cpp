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
        ll n, f, a, b;
        cin>>n>>f>>a>>b;
        vector<int> m(n+1,0);
        m[0] =0;
        for(int i=1;i<=n;i++)cin>> m[i];    
        for(int i=1;i<=n;i++){
            if((m[i]-m[i-1])*a > b){
                f-=b;
            }else{
                f-=(m[i]-m[i-1])*a;
            }
        }
        // not equal to zero bcz we are already considering it when subtracting n at the start
        if(f<=0) cout<< "NO"<< '\n';
        else cout<< "YES"<< '\n';
    }
    return 0;
}