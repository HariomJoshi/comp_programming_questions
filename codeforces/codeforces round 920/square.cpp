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
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin>>x1>> y1;
        cin>>x2>> y2;
        cin>>x3>> y3;
        cin>>x4>> y4;
        int side;
        if(x1 == x2) side = abs(y1-y2);
        else if(x1 == x3) side = abs(y1-y3);
        else side= abs(y1-y4); 
        cout<< side*side<< endl;
        
    }
    return 0;
}