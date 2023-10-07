#include<iostream>
#include<vector>
#include<queue>

// not completed

using namespace std;

class Solution {
private:

public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        // priority_queue<int> left;
        // priority_queue<int> height;
        vector<vector<int>> ans;
        int size= buildings.size();
        int left;
        int maxHeight = 0;
        for(int i =1; i<size; i++){
            vector<int> point;
            left = buildings[i][0];


            if(buildings[i][1]> maxHeight){
                point.push_back(left);
                point.push_back(buildings[i][1]);


                maxHeight = buildings[i][1];
            }



        }
    }
};


int main(){
    Solution sn;
    vector<vector<int>> vect = {{2,9,10},{3,7,15},{5,12,1},{15,20,10},{19,24,8}};
    vector<vector<int>> ans = sn.getSkyline(vect);

    for(int i =0; i<ans.size(); i++){
        for(int j = 0; j<2; j++){
            cout<< ans[i][j]<< " ";
        }
        cout<< endl;
    }
}