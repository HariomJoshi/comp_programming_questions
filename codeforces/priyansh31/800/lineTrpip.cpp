#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n,x;
        cin>>n>>x;
        int m = INT_MIN, prev =0, temp;
        for(int j =0;j<n;j++){
            cin>> temp;
            if(m< temp-prev){
                m = temp-prev;
            }
            prev = temp;
        }
        if(m< 2*(x-temp)) m = 2*(x-temp);
        cout<< m<< '\n';
    }
    return 0;
}