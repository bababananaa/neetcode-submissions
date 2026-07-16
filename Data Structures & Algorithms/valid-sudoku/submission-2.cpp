class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows=board.size();
        int cols=board[0].size();
        //iterate like throught each row so i 
        for(int i=0;i<rows;++i){
            unordered_set<char> temp;
            for(int j=0;j<cols;++j){
                if(board[i][j]=='.'){
                    continue;
                }
                if(temp.count(board[i][j])){
                    return false;
                }
                temp.insert(board[i][j]);
            }                                                                                                   
        }
        //check columns
        for(int i=0;i<rows;++i){
            unordered_set<char> temp;
            for(int j=0;j<cols;++j){
                if(board[j][i]=='.'){
                    continue;
                }
                if(temp.count(board[j][i])){
                    return false;
                }
                temp.insert(board[j][i]);
            }                                                                                                   
        }
        //check 3x3
       for(int BC=0;BC<9;BC+=3){ //iterate through 9 colums in sets of 3 (3 + 3+ 3)
        for(int BR=0;BR<9;BR+=3){//itereate through total rows
            unordered_set<char> temp;
             for(int i=0;i<3;++i){ //actual row value access  0 1 3 - PER SET
                for(int j=0;j<3;++j){ //actual colum 
                    char value=board[BR+i][BC+j]; //board value is r
                    if(value=='.'){
                        continue;
                    }
                    if(temp.count(value)){
                        return false;
                    }
                    temp.insert(value);
                }                                                                                                   
            }
        }
           
       }
        return true;
    }
};
