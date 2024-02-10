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
        string s;
        cin>>s;
        int i=0;
        while(i<n && s[i] == 'W'){
            i++;
        }
        int j=n-1;
        while(j>=0 && s[j] == 'W'){
            j--;
        }
        cout<< j-i+1<< '\n';
    }
    return 0;
}