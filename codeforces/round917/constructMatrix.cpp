#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n, k;
        cin>> n>>k;
        if(k== n || k==n*n|| k== 0){
            cout<< "YES"<< endl;
            if(k==0){
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        cout<< "0 ";
                        
                    }
                    cout<< endl;
                }
            }else if(k==n){
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(j==i){
                            cout<< "1 ";
                        }else{
                            cout<< "0 ";
                        }
                    }
                    cout<< endl;
                }
            }else{
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        cout<< "1 ";
                    }
                    cout<< endl;
                }
            }
        }else{
            cout<< "NO"<< endl;
        }
    }
    return 0;
}