#include <bits/stdc++.h>
using namespace std;
long double distance(int p1[2], int p2[2]){
    return sqrt((p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]));
}

long double scircle(int p1[2], int p2[2], int radius){
    return (p2[0]*p2[0] + p2[1]*p2[1] - 2*p1[0]*p2[0] -2*p1[1]*p2[1]-radius*radius);
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int P[2], A[2], B[2], O[2] = {0,0};
        cin>> P[0]>> P[1];
        cin>> A[0]>> A[1];
        cin>> B[0]>> B[1];
        long double a = distance(B,P);
        long double b = distance(B,O);
        long double c = distance(A,P);
        long double d = distance(A,O);
        long double dist = distance(A,B);
        long double ans = 1e9;
        ans = min(ans, max(c,d));
        ans = min(ans, max(a,b));
        ans = min(ans, max({dist/2, b,c}));
        ans = min(ans, max({dist/2, a, d}));


        cout<< setprecision(11)<< ans<< endl;

        
    }
    return 0;
}