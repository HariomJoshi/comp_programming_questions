#include<iostream>
using namespace std;

int main(){
    int arr[6]; // we created an array of 6 size
    for(int i=0; i<6; i++){
        cin>> arr[i];
        
    }

    cout<<"fourth element is: "<< arr[3]<< endl;

    int arr2d[3][4] = {
        {2,3,6,7},
        {5,3,6,7},
        {5,9,67,2}
    };

    // printing the 2D array as it is
    for(int i=0; i<3; i++){
        for(int j =0; j<4; j++){
            cout<< arr2d[i][j] << " ";
        }
        cout<< " "<< endl;
    }

    int arr2[3] = {232, 43, 45};
    cout<< arr2[2]<< endl;
    return 0;
}