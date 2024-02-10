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
        vector<int> a(n+1,0);
        for(int i=1;i<=n;i++)cin>>a[i];
        vector<int> diff(n+1, 0);
        diff[n] = n+1;
        int temp = n+1;
        for(int i=n-1;i>=1;i--){
            if(a[i]!= a[i+1]){
                temp = i+1;
            }
            diff[i] = temp;
        }
        // all our effort was making the diff array
        int q;
        cin>>q;
        for(int i =0;i<q;i++){
            int l, r;
            cin>>l>>r;
            int lans = l;
            int rans = diff[l];
            if(rans>r){
                cout<<-1 << " "<< -1<< '\n';
            }else{
                cout<< lans<< " "<< rans<< '\n';
            }
        }
        
    }
    return 0;

}