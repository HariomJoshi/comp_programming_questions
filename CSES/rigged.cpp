#include<iostream>
#include<stdio.h>
#include<limits.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        int S[n], E[n];
        for(int j =0; j<n; j++){
            cin>>S[j];
            cin>>E[j];
            // cout<< "Entered"<< endl;
        }
        // we have our input ready
        int max = 0;
        for(int j =1;j<n;j++){
            if(S[j]>=S[0] && E[j]>=E[0]) cout<< -1<< endl;
            if(E[j]> E[max]) max = j;
            // cout<< "Entered"<< endl;
        }
        // cout<< S[0]<< endl;
        // if(max = 0) return 1;
        // else return S[0];
        int ans[n];
        for(int j=S[0]; j>=0; j--){
            for(int k =0; k<n; k++){
                if(S[k]<=j){
                    ans[k] = E[k];
                }
            }
            int max =INT_MIN;
            for(int k =0; k<n; k++){
                if(ans[k]> ans[max]){
                    max =k;
                }
            }
            if(max != 0){
                cout<< j+1<< endl;
                break;
            }
        }
        


    }
    return 0;
}