#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        vector<vector<int>> vect(2, vector<int> (m,0));
        
        for(int i=0;i<m;i++){
            cin>>vect[0][i];
        }
        for(int i=0;i<m;i++){
            cin>>vect[1][i];
        }
        int sum1=0, sum2=0, ans = 0;
        for(int i=m-1;i>0;i--){
            sum1+= vect[0][i];
            vect[0][i] = sum1;
            sum2+= vect[1][m-1-i];
            vect[1][m-1-i] = sum2;
        }
        for(int i=0;i<m;i++){
            if(i-1<0) ans = max(ans, vect[0][i-1]);
            else if(i+1>=m) ans = min(ans, vect[1][i+1]);
            else ans = min(ans, max(vect[1][i-1], vect[0][i+1]));
        }

        cout<< ans<< '\n';
    }
    return 0;
}