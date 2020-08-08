#include <bits/stdc++.h>
using namespace std;

bool rat_in_a_maze(char maze[10][10], int soln[10][10], int i, int j, int m, int n){
    
    //base case
    if(i == m && j == n){
        soln[m][n] = 1;
        //print the path
        for(int a = 0; a <= m; a++){
            for(int b = 0; b <= n; b++){
                cout<<soln[a][b]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;

    }
    
    //rat should be inside
    if(i > m || j > n){
        return false;
    }
    //if there is a block
    if(maze[i][j] == 'X'){
        return false;
    }
    soln[i][j] = 1;
    bool rightans = rat_in_a_maze(maze, soln, i+1, j, m,n);
    bool bottomans = rat_in_a_maze(maze, soln, i, j+1, m, n);
    //backtracking
    soln[i][j] = 0;
    if(rightans || bottomans){
        return true;
    }
    return false;
}



int main(){
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00"
    };
    int soln[10][10] = {0};

    int m = 4;int n = 4;
    bool ans = rat_in_a_maze(maze, soln, 0,0,m-1,n-1);
    if(ans == false){
        cout<<"path dosen't exist"<<endl;
    }
    return 0;
}
