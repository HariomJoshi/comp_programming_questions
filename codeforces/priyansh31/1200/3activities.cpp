#include <bits/stdc++.h>
using namespace std;

int main(){ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        vector<int> a(n,0), b(n, 0), c(n,0);
        for(int j =0;j<n;j++)cin>> a[j];
        for(int j =0;j<n;j++)cin>> b[j];
        for(int j =0;j<n;j++)cin>> c[j];
        for(int j =0;j<n;j++){
            a[j] = max(a[j], max(b[j], c[j]));
            // cout<< a[i]<< " ";
        }
        
        sort(a.begin(), a.end());
        for(int j =0;j<n;j++){
            cout<< a[j]<< " ";
        }
        cout<< endl;
        int sum = a[n-1]+ a[n-2]+a[n-3];
        cout<< sum<< '\n';
        
    }
    return 0;
}