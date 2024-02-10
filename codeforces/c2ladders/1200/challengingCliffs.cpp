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
        for(int i=0;i<n;i++) cin>> a[i];
        sort(a.begin(), a.end());
        int idx = 0, min = INT_MAX;
        for(int i=1;i<n;i++){
            if(abs(a[i]-a[i-1])<min){
                idx = i;
                min = abs(a[i]-a[i-1]);
            }
        }
        // now rotate the array by i
        if(n != 2){
            rotate(a.begin(), a.begin()+idx, a.end());
        }
        for(int i=0;i<n;i++) cout<< a[i]<< " ";
        cout<< '\n';
    }
    return 0;
}