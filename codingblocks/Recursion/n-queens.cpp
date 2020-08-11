#include <bits/stdc++.h>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n){
    for(int row = 0; row < n; row++){
        if(board[row][j] == 1){
            return false;
        }
    }
    //diagnols
    int x = i;
    int y = j;
    while(x >= 0 && y >= 0){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }
    //right upper diganoal
    x = i;
    y = j;
    while(x >= 0 && y < n){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}

bool solveNQueens(int board[][10], int i, int n){
    //base case
    if(i == n){
        //print the solution
        for(int row = 0; row<n; row++){
            for(int col = 0; col<n; col++){
                if(board[row][col] == 1){
                    cout<<"& ";
                }else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        //return false; uncomment for all configurations 
        return true;
    }
    //recusive case
    for(int j = 0; j < n; j++){
        if(isSafe(board, i, j, n)){
            board[i][j] = 1;
            bool isPossible =  solveNQueens(board, i+1, n);
            if(isPossible){
                return true;
            }
            board[i][j] = 0;
        }
    }
    return false;
}

int main() {
    int n = 4;
    int board[10][10] = {0};
    bool ans = solveNQueens(board, 0,n);
}
