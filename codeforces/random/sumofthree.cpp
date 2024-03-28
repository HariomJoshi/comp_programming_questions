#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        bool br = false;
        for(int i =1; i<n; i++){
            for(int j =i; j<n; j++){
                int k = n-j-i;
                // cout<< k<<endl;
                if(!((k<=0)|| (k==i|| i==j|| j==k)|| (k%3 ==0|| i%3==0|| j%3==0))){
                    cout<<"YES"<<endl;
                    cout<< i<< " "<<j<< " "<< k<<"\n";
                    br = true;
                    break;
                }
            }
            if(br) break;
            
        }

        if(!br)cout<<"NO"<< endl;
    }
    return 0;
}