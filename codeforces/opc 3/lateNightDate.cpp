#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

long long area(vector<int> &nums, int &m, int &n){
    long long sum = 0;
    for(int i=0;i<n;i++){
        if(m-nums[i]>0) sum+= (m-nums[i]);
    }
    return sum;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        int s = *min_element(arr.begin(), arr.end()), e = INT_MAX;
        int ans =INT_MAX;
        while(s<=e){
            int m = s+(e-s)/2;
            long long ar = area(arr, m, n);
            if(ar<= x){
                ans = m;
                s= m+1;
            }else{
                e = m-1;
            }

        }
        cout<< ans<<'\n';
    }
    return 0;
}



