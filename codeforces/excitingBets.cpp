#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int a, b;
        cin>> a>> b;
        if(a == b){
            cout<< 0<<" "<<0<< '\n';
            continue;
        }
        cout<< abs(a-b)<< " ";
        cout<< abs(a-b)*ceil((double)b/abs(a-b))-b<< '\n';
        
    }
    return 0;
}