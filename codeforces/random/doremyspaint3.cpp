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
        int arr[n];
        for(int j =0; j<n; j++){
            cin>> arr[j];
        }
        int a = arr[0], b, acount = 0, bcount =0;
        int j =0;
        while(arr[j]==a){
            j++;
        }
        b = arr[j];
        bool ans = false;
        for(j =0; j<n; j++){
            if(arr[j] == a){
                acount++;
            }else if(arr[j] == b){
                bcount++;
            }else{
                cout<< "NO"<< '\n';
                ans = true;
                break;
            }

        }
        if(ans) continue;
        if(n%2 == 1 && abs(acount -bcount) == 1 || n%2 == 0 && acount == bcount || acount == n || bcount == n) cout<< "YES"<< '\n';
        else cout<< "NO"<< '\n'; 
    }
    return 0;
}