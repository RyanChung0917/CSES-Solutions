#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
vector<bool> col(8, false), diag1(15, false), diag2(15, false);//diag1:row-col+7, diag2:row+col
vector<vector<char>> grid;

void backtracking(int row){
    if(row >= 8){
        cnt++;
        return;
    }

    for(int c = 0; c < 8; ++c){
        if(grid[row][c] == '*') continue;
        if(col[c]) continue;
        if(diag1[row-c+7]) continue;
        if(diag2[row+c]) continue;

        col[c] = true;
        diag1[row-c+7] = true;
        diag2[row+c] = true;
        backtracking(row+1);
        col[c] = false;
        diag1[row-c+7] = false;
        diag2[row+c] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    grid.resize(8, vector<char>(8));
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cin >> grid[i][j];
        }
    }

    backtracking(0);
    cout << cnt << "\n";

    return 0;
}