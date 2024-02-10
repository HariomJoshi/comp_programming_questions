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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> check1(k+1,0), check2(k+1,0);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp>=0 && temp <=k){
                check1[temp]++;
            }

        } 
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;
            if(temp>=0 && temp <=k){
                check2[temp]++;
            }
        }

        string ans = "YES";
        for(int i=1;i<=k;i++){
            if(check1[i] == 0 && check2[i]==0){
                ans = "NO";
                break;
            }
        }
        if(ans == "NO"){
            cout<< ans<< '\n';
            continue;
        }
        int zc1 =0, zc2 = 0;
        for(int i=1;i<=k;i++){
            if(check1[i] == 0) zc1++;
            
        }
        for(int i=1;i<=k;i++){
            if(check2[i] == 0) zc2++;

        }
        
        if(zc1 > k/2 || zc2 > k/2){
            cout<< "NO"<< '\n';
        }else{
            cout<< "YES"<< '\n';
        }
        
    }
    return 0;
}