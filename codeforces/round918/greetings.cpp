#include<bits/stdc++.h>
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;


int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        vector<pair<int, int>> path;
        for(int j=0;j<n;j++){
            pair<int, int> temp;
            cin>> temp.first>> temp.second;
            path.push_back(temp);
        }
        sort(path.begin(), path.end(), comp);
        set<int> st;
        int ans =0;
        for(int j =0;j<n;j++){
            ans += st.orde
        }


        
    }
    return 0;
}

bool comp(pair<int, int> temp, pair<int, int> temp2){
    return temp.second < temp2.second;
}
