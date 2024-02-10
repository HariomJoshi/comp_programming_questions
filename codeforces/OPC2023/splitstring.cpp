#include <bits/stdc++.h>
using namespace std;

int partitions(string s){

}


int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;   
    char k;
    cin>>s;
    cin>>k;
    int size =0, ans = 1;
    bool first =true, first2 = true;
    for(int i =0;i<n;i++){
        if(s[i] == 'a' && first){
            first = false;
            
        }
        else if(s[i] == 'a'){
            ans *=size;
            size=0;
            
        }
        size++;
        
        
    }
    cout<< ans<<endl;
    return 0;
}