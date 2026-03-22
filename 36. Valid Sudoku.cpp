//solved valid sudoku by giving each box a unique value
//time complexity is O(1)(9*9 is a constant time and it is fixed for this problem)same for space complexity

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>seen;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                char current_val=board[i][j];

                if(current_val!='.')
                {
                    string row_key="row"+to_string(i)+current_val;
                    string col_key="col"+to_string(j)+current_val;
                    string box_key="box"+to_string(i/3)+to_string(j/3)+current_val;
                    if(seen.count(row_key)|seen.count(col_key)|seen.count(box_key))
                    return false;

            seen.insert(row_key);
            seen.insert(col_key);
            seen.insert(box_key);
                }
                
            }
            
        }    
        return true;  
    }
};