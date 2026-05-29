class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> row(9);
        vector<unordered_set<int>> col(9);
        vector<unordered_set<int>> box(9);

        for(int i = 0;i<9;i++) {
            for(int j =0;j<9;j++) {
                char ch = board[i][j];
                if (ch == '.') continue;
                int num = ch - '0';
                int boxn = (i/3) * 3 + (j/3);

                if (row[i].count(num) || col[j].count(num) || box[boxn].count(num) ) return false;

                row[i].insert(num);
                col[j].insert(num);
                box[boxn].insert(num);
            }
        }

        return true;
        
    }
};
