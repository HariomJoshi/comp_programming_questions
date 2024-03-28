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
        int n,m;
        cin>>n>>m;
        vector<int> a(n,0);
        int nc=0;
        for(int i=0;i<n;i++){
            // a stores all the zeroCount
            int temp;
            cin>>temp;
            while(temp%10==0){
                a[i]++;
                nc++;
                temp /=10;
            }
            while(temp>0){
                nc++;
                temp/=10;
            }
        }
        sort(a.begin(), a.end(), greater<int>());
        int zc=0;
        for(int i=0;i<n;i+=2){
            zc+= a[i];
        }
        string winner;
        if(nc-zc>m){
            winner = "Sasha";
        }else{
            winner = "Anna";
        }
        cout<< winner<<'\n';
    }
    return 0;
}