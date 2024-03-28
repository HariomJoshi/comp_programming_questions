#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int sz1= s.size();
    
    int n;
    cin>>n;
    int count =0;
    for(int i=0;i<n;i++){
        int p1 = 0, p2 =0;
        string str;
        cin>>str;
        int sz2 = str.size();
        if(sz1 < sz2){
            continue;
        }
        bool found = true;
        while(p1<sz1 && p2<sz2){
            int c1 =1, c2=1;
            while(p1<sz1-1 && s[p1]== s[p1+1]){
                p1++;
                c1++;
            }
            while(p2<sz2-1 && str[p2]==str[p2+1]){
                p2++;
                c2++;
            }
            if(s[p1] != str[p2] || c1 != c2 && (c1<3 || c2>c1)){
                found = false;
                break;
            }
            p1++;
            p2++;
        }
        if(found && s[p1]==str[p2]) count++;
    }
    cout<< count<<'\n';
    return 0;
}




