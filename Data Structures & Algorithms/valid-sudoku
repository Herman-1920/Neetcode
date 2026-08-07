bool checkrow(vector<vector<char>>& board){
    int n=board.size();
    
    for(int i=0;i<n;i++){
        set<char>s;
        for(int j=0;j<n;j++){
            if(board[i][j]=='.')continue;
            else if(s.find(board[i][j])==s.end()){
                s.insert(board[i][j]);
            }
            else
            return false;
        }
    }
    return true;
}

bool checkcols(vector<vector<char>>& board){
    int n=board.size();
    
    for(int i=0;i<n;i++){
        set<char>s;
        for(int j=0;j<n;j++){
            if(board[j][i]=='.')continue;
            else if(s.find(board[j][i])==s.end()){
                s.insert(board[j][i]);
            }
            else
            return false;
        }
    }
    return true;
}

bool checkboxes(vector<vector<char>>& board){

   for(int i=0;i<9;i+=3){
    for(int j=0;j<9;j+=3){
        set<char>s;
        for(int r=i;r<i+3;r++){
            for(int c=j;c<j+3;c++){
                if(board[r][c]=='.')continue;
                else if(s.find(board[r][c])==s.end()){
                    s.insert(board[r][c]);
                }
                else return false;
            }
        }
    }
   }
   return true;
}




class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(checkrow(board) && checkcols(board) && checkboxes(board))return true;
        return false;
    }
};
