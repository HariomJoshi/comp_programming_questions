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
        char arr[n][n];
        for(int j =0;j<n;j++)for(int k =0;k<n;k++) cin>> arr[j][k];

        int j =0;
        int ans =0;
        while(j<n/2){
            for(int k = j;k<n-j-1; k++){
                int abc[4];
                abc[0] = arr[j][k];
                abc[1] = arr[k][n-1-j];
                abc[2] = arr[n-1-j][n-1-k];
                abc[3] = arr[n-1-k][j];
                sort(abc, abc+4);
                for(int l =0;l<3; l++) ans += (abc[3] -abc[l]);   
            }
            j++;
        }
        cout<< ans<< '\n';
    }
    return 0;
}