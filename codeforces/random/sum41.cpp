#include <bits/stdc++.h>
using namespace std;

int main(){ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        long long p;
        cin>>p;
        vector<int> vect;
        int j =2;
        while(j<p){
            if(p%j == 0){
                vect.push_back(j);
                p = p/j;
                j =1;
            }
            j++;
            
        }
        if(p%j == 0)vect.push_back(j);


        int sum = 0;
        for(int j =0; j<vect.size();j++){
            // cout<< vect[j]<<endl;
            sum +=vect[j];
        }




        if(sum==41){
            // ans is vect;
            cout<< "Case #"<< i+1 <<": "<< vect.size()<< " ";
            for(int k =0;k<vect.size();k++){
                cout<< vect[k]<<" ";
            }
            cout<< '\n';
        }else if(sum<41){
            int n = 41-sum;
            cout<< "Case #"<< i+1 <<": "<< vect.size()<< " ";
            for(int k =0;k<vect.size();k++){
                cout<< vect[k]<<" ";
            }
            for(int k=0; k<n; k++){
                cout<<1<<" ";
            }
            cout<< '\n';

        }else{
            cout<< "Case #"<< i+1<< ": -1"<< '\n';
        }
        
    }
    
    return 0;
}