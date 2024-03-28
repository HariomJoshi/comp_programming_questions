#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> min(n,0);
    for(int i=0;i<n;i++){
        int h, m;
        cin>>h>>m;
        min[i] = h*60+m;
    }
    sort(min.begin(), min.end());
    int count =1, ans= 0;
    for(int i=1;i<n;i++){
        if(min[i-1]== min[i]) count++;
        else count=1;
        ans = max(ans, count);
    }
    cout<< ans<<endl;

    return 0;
}