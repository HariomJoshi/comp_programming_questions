#include <bits/stdc++.h>
using namespace std;
long double distance(int p1[2], int p2[2]){
    return sqrt((p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]));
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
        long double max1 = (a>b)?a:b;
        long double max2 = (c>d)?c:d;
        long double min = (max1>max2)?max2:max1;
        long double dist = distance(A,B)/2;
        long double ans;
        if((a<=dist && d<=dist)|| (b<=dist&& c<=dist) || (d<=dist&& a<=dist)||(b<=dist&&c<=dist)){
            ans = (min>dist)? dist:min;
        }else{
            ans = min;
        }
        cout<< ans << "\n";
    }
    return 0;
}