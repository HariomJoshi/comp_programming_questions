#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        bool A= false, B=false, C=false;
        char ans;
        for(int j =0;j<3;j++){
            for(int k=0;k<3;k++){
                char c;
                cin>>c;
                if(c=='A')A = true;
                else if(c=='B')B= true;
                else if(c=='C')C= true;
            }
            if(!(A&& B&& C)){
                if(A&& B) ans = 'C';
                if(C&& B) ans = 'A';
                if(A&& C) ans = 'B';
            }
            A=false;
            B=false;
            C=false;
        }
        cout<< ans<< '\n';
    }
    return 0;
}