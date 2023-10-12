#include <bits/stdc++.h>
using namespace std;


bool comp(pair<int, int> p1, pair<int, int> p2){
    return p1.first<p2.first;
}


int main(){ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n, p;
        cin>>n>>p;
        vector<pair<int, int>> map;
        for(int j=0;j<n;j++){
            pair<int, int> t;
            cin>>t.second;
            map.push_back(t);
        }
        for(int j=0;j<n;j++) cin>>map[j].first;

        sort(map.begin(), map.end(), comp);

        int cost = p, count =1, k=0;
        while(count<n){
            if(map[k].first<= p){
                cost+= map[k].first*(min(n-count, map[k].second));
                count += map[k].second;
                k++;
            }else{
                cost += (n-count)*p;
                break;
            }
        }
        cout<< cost<<endl;
    }
    return 0;
}