#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n, k;
        cin>>n>>k;
        long long prod=1;
        for(int j =0;j<n;j++){
            int temp;
            cin>> temp;
            prod*=temp;
        }
        // input ready  
        if(2023%prod!=0){
            cout<<"NO"<< '\n';
            continue;
        }
        cout<< "YES"<< '\n';
        for(int j=0;j<k-1; j++){
            cout<< 1<< " ";
        }
        cout<< 2023/prod<< "\n";
    }
    return 0;
}