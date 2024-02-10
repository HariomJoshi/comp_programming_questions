#include <bits/stdc++.h>
using namespace std;

bool isC(char c){
    if(c == 'a' || c=='e') return false;
    else return true;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string helper = "";
        for(int j=0;j<n;j++){
            if(isC(str[j])){
                helper+='C';
            }else{
                helper+='V';
            }
        }
        int j =0;
        string ans = "";
        while(j<n){
            if(j+3< n && helper.substr(j,3)=="CVC"){
                if(j+3<n && helper[j+3] == 'V'){
                    ans+=str.substr(j,2);
                    ans+=".";
                    j+=2;
                }else{
                    ans+= str.substr(j,3);
                    ans+=".";
                    j+=3;
                }
            }else{
                ans+=str.substr(j, n-j);
                break;
            }
        }
        cout<< ans<< endl;

    }
    return 0;
}