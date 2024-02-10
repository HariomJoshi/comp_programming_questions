#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin>>n>> t;
    string str;
    cin>> str;
    // input ready
    for(int i =0;i<t;i++){
        for(int j =0;j<n;j++){
            if(str[j] == 'B' && str[j+1]== 'G'){
                str[j] ='G';
                str[j+1] = 'B';
                j++;
            }
        }
    }
    cout<< str<< endl;
    return 0;
}