#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        char c[10];
        int points=0;
        for(int j =0; j<10;j++){
            cin>>c[j];
        }
        // for(int j=0; j<10;j++){
        //     for(int k=0; k<10;k++){
        //         if(c[j][k] == 'X'){
        //             if(((j==0|| j==9)&& k>=0 && k<=9)||((k==0|| k==9)&& j>=0&& j<=9)){
        //                 points +=1;
        //             }else if(((j==1|| j==8)&& k>=1 && k<=8)||((k==1|| k==8)&& j>=1&& j<=8)){
        //                 points+=2;
        //             }else if(((j==2|| j==7)&& k>=2&& k<=7)||((k==2|| k==7)&& j>=2&& j<=7)){
        //                 points+=3;
        //             }else if(((j==3|| j==6)&& k>=3 && k<=6)||((k==3|| k==6)&& j>=3&& j<=6)){
        //                 points+=4;
        //             }else if((((j==4|| j==5)&& k>=4 && k<=5)||((k==4|| k==5)&& j>=4&& j<=5))){
        //                 points+=5;
        //             }
        //         }
        //     }
        // }

        // we have our input ready
        return points;

    }
}