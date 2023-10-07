#include<iostream>
#include<vector>


using namespace std;



class Solution{
private:

    bool isSafe(int row, int col, vector<vector<int>> &board, int n){
        // since we are filling from left to right, there is no need to check right of the current position
        int x= row;
        int y = col;
        
        // check for same column
        while(x <n){
            if(board[x][y] == 1){
                return false;
            }
            x++;
        }
        
        // we have written code in such a way that we don't need to check for 2 queens in the same row because as soon as we place a queen in'
        // one row we just moove forward, it is not possible to place two queens in one row
        
        // check for diagonals
        x = row;
        y = col;
        
        //check for right bottom diagonal
        while(x <n && y <n){
            if(board[x][y] == 1){
                return false;
            }
            y++;
            x++; 
        }
        
        x = row;
        y = col;
        // check for left bottom diagonal
        while(x <n && y >=0){
            if(board[x][y] == 1){
                return false;
            }
            y--;
            x++; 
        }
        
        // everything is safe
        return true;
        
        
    }
    
    
    void solve(int row, vector<vector<int>> &ans, vector<vector<int>> &board, vector<int> &temp, int n){
        // base case
        if(row == -1){
            ans.push_back(temp);
            return;
        }
        
        // solve 1 case and rest will be taken care by recursion
        for(int col =0; col<n; col++){
            if(isSafe(row, col, board, n)){
                temp.push_back(col+1);
                board[row][col] = 1;
                solve(row-1, ans, board, temp, n);
                // backtrack
                board[row][col] = 0;
                temp.pop_back();
                
            }
        }
    }
    
public:
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(n-1, ans, board, temp, n);
        return ans;
        
        
    }
};