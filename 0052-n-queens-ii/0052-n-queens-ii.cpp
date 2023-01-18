class Solution 
{
public:
    bool isSafe(int row, int col, vector<string>&board, int n)
    {
        int temp1 =row;
        int temp2 = col;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        row = temp1;
        col = temp2;
        while(col>=0)
        {
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        row = temp1;
        col = temp2;
        while(row<n && col>=0)
        {
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void helper(int col, vector<string> &board, set<vector<string>> &res, int n)
    {
        if(col == n)
            res.insert(board);
        for(int row =0;row<n;row++)
        {
            if(isSafe(row, col, board, n))
            {
                board[row][col] = 'Q';
                helper(col+1, board, res, n);
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) 
    {
        set<vector<string>> res;
        vector<string>board(n);
        string s(n, '.');
        for(int i =0;i<n;i++)
        {
            board[i] = s;
        }
        helper(0, board, res, n);
        return res.size();
    }
};