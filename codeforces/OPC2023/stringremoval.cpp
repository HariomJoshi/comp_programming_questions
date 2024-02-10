#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        string a;
        cin>>a;
        int acount =0, bcount=0;
        for(int i =0;i<a.size();i++){
            if(a[i] == 'a')acount++;
            else bcount++;
        }
        if(acount == bcount) cout<< "YES"<<'\n';
        else cout<< "NO"<<'\n';
    }
    return 0;
}