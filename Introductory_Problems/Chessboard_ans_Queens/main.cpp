#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void backtracking(int row, vector<vector<char>> cur){
    if(row >= 8){
        cnt++;
        return;
    }

    for(int col = 0; col < 8; ++col){
        if(cur[row][col] == '*') continue;

        vector<vector<char>> nxt = cur;
        for(int i = row; i < 8; ++i) nxt[i][col] = '*';
        int i = row, j = col;
        while(i < 8 && j < 8){
            nxt[i][j] = '*';
            i++, j++;
        }
        i = row, j = col;
        while(i < 8 && j >= 0){
            nxt[i][j] = '*';
            i++, j--;
        }
        backtracking(row+1, nxt);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<char>> grid(8, vector<char>(8));
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cin >> grid[i][j];
        }
    }

    backtracking(0, grid);
    cout << cnt << "\n";

    return 0;
}