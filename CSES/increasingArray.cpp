#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int min;
    cin>> min;
    long long ans = 0;
    for(int i =1; i<t; i++){
        int temp;
        cin>> temp;
        if(temp<min){
            ans += min-temp;
            temp = min;
        }
        min = temp;

    }
    cout<< ans<< endl;
    return 0;
}