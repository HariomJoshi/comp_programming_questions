#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n,k;
        cin>>n>>k;
        int prev = INT_MIN;
        bool sorted =true;
        for(int i =0;i<n;i++){
            int temp;
            
            cin>> temp;
            if(temp < prev){
                sorted = false;
            }
            prev = temp;
        }

        if(k>1 || sorted) cout<< "YES" << '\n';
        else cout<< "NO"<< '\n';
    }
    return 0;
}