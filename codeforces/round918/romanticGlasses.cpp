#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        set<long long> st;
        long long sum = 0;
        bool found = false;
        for(int j =0;j<n;j++){
            int temp;
            cin>> temp;
            if(j%2==1){
                temp = -temp;
            }
            if(st.find(sum) != st.end()){
                found = true;
            }else{
                st.insert(sum);
            }
            sum+=temp;

        }
        if(st.find(sum) != st.end()) found = true;
        if(found) cout<< "YES"<< endl;
        else cout<< "NO"<< endl;
    }
    return 0;
}