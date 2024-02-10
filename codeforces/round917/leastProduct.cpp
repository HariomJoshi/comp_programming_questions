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
        int ncount =0;
        bool zeroPresent = false;
        for(int i =0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp<0)ncount++;
            else if(temp == 0) zeroPresent= true;
        }
        if(ncount%2!=0 || zeroPresent){
            cout<< 0<< endl;
            
        }else{
            cout<< 1<< endl;
            cout<< n<< " "<< 0<< endl;
        }
    }
    return 0;
}