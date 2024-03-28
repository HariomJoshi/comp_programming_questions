#include <bits/stdc++.h>
using namespace std;


int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int k =0; k<t; k++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int oneCount[n];
        int totalOnes =0, totalZeroes =0;
        for(int j =n-1;j>=0; j--){
            if(s[j] == '1'){
                totalOnes++;
            }else{
                totalZeroes++;
            }
            oneCount[j] = totalOnes;
        }
        long long ans = 0,i=n-1;
        while(i>=0){
            if(s[i] == '0'){
                ans+= oneCount[i];
                cout<<ans<<" ";
            }
            i--;
        }
        while(totalOnes>0){
            cout<< -1<< " ";
            totalOnes--;
        }
        cout<< '\n';

        
    }
    return 0;
}