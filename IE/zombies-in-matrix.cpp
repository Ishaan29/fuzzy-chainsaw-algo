//zombies in a grid problem


#include <bits/stdc++.h>
using namespace std;

int minHours(vector<vector<int>> &grid, int n, int m){
    int dir[4][2] = {{1,  0}, {-1, 0}, {0,  1}, {0,  -1}};
    int hours = -1;
    queue<pair<int, int>> q; // store humans i, j
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 1) q.push({i,j});
        }
    }
    //now use bfs
    while(!q.empty()){
        for(int i = 0; i < q.size(); i++){
            auto node = q.front();
            q.pop();
            for(auto d: dir){
                int nr = node.first + d[0];
                int nc = node.second + d[1];

                if(nr > 0 && nr < n && nc > 0 && nc < m && grid[nr][nc] == 0){
                    q.push({nr,nc});
                    grid[nr][nc] = 1;
                }
            }
        }
        hours++;
    }
    return hours;
}


int main() {
    int n; int m;
    vector<vector<int>> grid = {
        {0, 1, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 0, 1},
        {0, 1, 0, 0, 0}
    };
    n = grid.size();
    m = grid[0].size();
    cout<<minHours(grid, n, m)<<endl;
}
