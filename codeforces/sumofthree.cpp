#include <bits/stdc++.h>
using namespace std;

int main(){ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        long long n;
        cin>>n;
        if(n<=6){
            cout<< "NO"<< "\n";
            continue;
        }else{
            int j = 0, a=0, b=0, c=0;
            while(j<n){
                j++;
                if(j%3!= 0 && j!=a && j!=b && j!=c){
                    n-=j;
                    if(a==0) a=j;
                    else if(b==0) b =j;
                    else c=j;
                }
                
            }
            if(a==0 || b==0||c==0){
                cout<<"NO"<< endl;
            }else{
                cout<<"YES"<<endl;
                cout << a<< " "<<b<< " "<<c<< "\n";
            }
            
        }
    }
    return 0;
}