#include <bits/stdc++.h>
using namespace std;
bool check(string s, int sSize, string sub, int subSize){
    for(int i =0;i<sSize;i++){
        int j=0;
        while(s[i] == sub[j]){
            i++;
            j++;
        }
        if(j == subSize) return true;
    }
    return false;
}

int main(){ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>> x>>s;
        int count =0;
        bool ch = true;
        while(n<=3*m){
            if(check(x,n,s,m)){
                cout<< count<< "\n";
                ch = false;
                break;
            }
            n += n;
            x +=x;
            count++;
        }
        if(ch) cout<< -1<< endl;
        
        
        // if(n==m){
        //     if(check(x, n, s, m)){
        //         cout<< count<<"\n";
        //         continue;
        //     }else{
        //         x+=x;
        //         n+=n;
        //         count++;
        //     }
            
        // }
        // while(n<=2*m){

        // }
        
        // if(check(x,n,s,m)){
        //     cout<< count<< "\n";
        //     continue;
        // }else{
        //     cout<< -1<< "\n";
        //     continue;
        // }
        

    }
    return 0;
}