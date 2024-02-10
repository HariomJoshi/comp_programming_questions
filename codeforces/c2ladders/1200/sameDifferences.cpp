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
        unordered_map<int, int> mp;
        long long ans =0;
        for(int j =0;j<n;j++){
            int temp;
            cin>>temp; 
            temp = temp-j;
            mp[temp]++;
            
        }

        for(auto it: mp){
            ans += ((long long)it.second*(it.second-1))/2;
        }
        cout<< ans<<'\n';
    

    }
    return 0;
}