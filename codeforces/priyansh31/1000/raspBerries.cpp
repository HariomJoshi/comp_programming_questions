#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n, k;
        cin>> n>> k;
        int dist = INT_MAX;
        if(k == 4){
            int count =0;
            bool oneLess= false;
            for(int j =0;j<n;j++){
                int temp;
                cin>>temp;
                if(temp%2==0){
                    if(temp%4==0) count  += 2;
                    else count++;
                }else{
                    if((temp+1)%4==0){
                        oneLess= true;
                    }
                }
            }
            if(count >=2) cout<< 0<< '\n';
            else if(count == 1 || oneLess) cout<< 1<<"\n";
            else cout<< 2<<"\n";
            continue;
        }
        for(int j =0;j<n;j++){
            int temp;
            cin>> temp;
            if(temp%k == 0) dist = 0;
            else dist = min(dist, k-temp%k);
        }   
        cout<< dist<< '\n';
    }
    return 0;
}