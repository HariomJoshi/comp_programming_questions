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
        vi a(n,0), b(m,0);
        for(int i=0;i<n;i++) cin>> a[i];
        for(int i=0;i<m;i++) cin>> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        ll s =0, e1=n-1, e2=m-1, num1, num2, count =0, ans =0;
        while(count <n){
            num1 = abs(a[s]- b[s]);
            num2 = abs(a[e1]-b[e2]);
            if(num1> num2){
                ans += num1;
                s++;
            }else{
                ans += num2;
                e1--;
                e2--;
            }
            count++;
        }

        cout<< ans<< endl;




    }
    return 0;
}