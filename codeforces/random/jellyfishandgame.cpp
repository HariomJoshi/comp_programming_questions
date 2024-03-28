#include<stdio.h>
#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n, m, k, x = 0, y = 0;
        cin>> n>> m>>k;
        int a[n], b[m];
        for(int j =0; j<n; j++){ // jellyfish's apples
            cin>> a[j];  
        }
        for(int j =0; j<m; j++){ // gellyfish's apples
            cin>> b[j];
        }
        // input ready
        k--;

        // first turn -- Jelly fish's turn
        for(int j =0; j<n; j++) if(a[j]< a[x]) x =j;
        for(int j =0; j<m; j++) if(b[j]> b[y]) y = j; 
        if(a[x]< b[y]) swap(a[x], b[y]); 
        
        // second turn -- Gelly fish

        if(k&1){ // if k is odd
            x =0, y=0;
            for(int j =0; j<n; j++) if(a[j]> a[x]) x =j;
            for(int j =0; j<m; j++) if(b[j]< b[y]) y = j; 
            swap(a[x], b[y]);
        }

        long long ans =0;
        for(int j =0; j<n; j++) ans += a[j];
        cout<< ans<< endl;
        
    }
}
/*
5
5 4 572637639
924242480 924242480 924242480 924242480 924242480
606050564 606050564 7222523 7222523
5 5 6
51350557 51820889 51820889 51350557 321041583
62167154 402194975 172777188 88927749 61027547
5 4 1
807033707 969121316 442675026 807033707 807033707
234037871 486985454 368985648 39735900
5 2 28811906
528527611 528527611 967814754 528527611 528527611
32898719 32898719
5 5 728175035
160266776 18089720 112428348 112428348 130883766
154884208 426984691 426984691 426984691 793566068
*/