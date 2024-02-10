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
        for(int i =0;i<n;i++) cin>>a[i];
        vector<int> ch(26,0);
        string ans = "";
        for(int i=0;i<n;i++){
            for(int j =0;j<26;j++){
                // searching for the desirable element
                if(ch[j]== a[i]){
                    ans+= ('a'+ j);
                    ch[j]++;
                    break;
                }
            }
            
        }
        cout<< ans<< '\n';

    }
    return 0;
}