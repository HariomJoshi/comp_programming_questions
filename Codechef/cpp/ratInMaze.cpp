#include<iostream>
#include<vector>

using namespace std;

class Solution{
    private:
    bool isSafe(int newx, int newy, vector<vector<bool>> &visited, vector<vector<int>> &arr, int n){
        return ((newx >=0 && newx <n ) && ( newy >=0 && newy <n) && (visited[newx][newy]==0) && (arr[newx][newy] == 1));
    }
    
    void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &vis, string path){
        // base case
        if(x == n-1 && y == n-1){
            ans.push_back(path);
        }
        
        // 4 movements
        vis[x][y] = true;
        
        // down
        if(isSafe(x+1, y, vis, arr, n)){
            solve(x+1, y, arr, n, ans, vis, path + 'D');
        }
        
        // left
        if(isSafe(x, y-1, vis, arr, n)){
            solve(x, y-1, arr, n, ans, vis, path + 'L');
        }
        
        // right
        if(isSafe(x, y+1, vis, arr, n)){
            solve(x, y+1, arr, n, ans, vis, path + 'R');
        }
        
        // up
        if(isSafe(x-1, y, vis, arr, n)){
            solve(x-1, y, arr, n, ans, vis, path + 'U');  
        }

        vis[x][y] = false;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<bool>> visited(n, vector<bool> (n,0));
        string path = "";
        if(m[0][0] == 0){
            ans.push_back("-1");
            return ans;
        }
        
        solve(0,0, m, n, ans, visited, path);
        return ans;
            
    }
};



int main(){
    Solution s;
    
}