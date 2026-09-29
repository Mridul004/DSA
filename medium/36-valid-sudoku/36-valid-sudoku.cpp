            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    int boxIndex = (i / 3) * 3 + (j / 3);
                    if (rows[i][num] || cols[j][num] || boxes[boxIndex][num]) return false;
                    rows[i][num] = cols[j][num] = boxes[boxIndex][num] = true;
                }
            }
        for (int i = 0; i < 9; i++) {
        bool boxes[9][9] = {false};
        bool cols[9][9] = {false};
        bool rows[9][9] = {false};
    bool isValidSudoku(vector<vector<char>>& board) {
public:
        }
        return true;