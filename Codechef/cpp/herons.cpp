#include<iostream>
#include<math.h>

using namespace std;
int main(){
    float side1;
    float side2;
    float side3;
    cin>> side1;
    cin>> side2;
    cin>> side3;
    float s = side1 + side2 + side3;
    s = s/2;
    float ans = (s-side1)*(s-side2)*(s-side3);
    ans = sqrt(ans);
    cout<< ans<< endl;
    return 0;

}