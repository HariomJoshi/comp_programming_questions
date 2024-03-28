#include <bits/stdc++.h>
using namespace std;
int sumlet(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;\
    }
    return sum;
}
 
 
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int x,k;
        cin>>x>>k;
 
        int sum =sumlet(x);
        for(int j =0;j<=18;j++){
            if(sum%k==0){
                cout<<x<<'\n';
                break;
            }
            x++;
            sum = sumlet(x);
        }
    }
    return 0;
}