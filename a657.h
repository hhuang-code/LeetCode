class Solution {
public:
    bool judgeCircle(string moves) {
     int row, col;
    row = col = 0;
    int len = moves.length();
    for(int i = 0; i < len; i++){
        switch(moves[i]){
            case 'R':
                row++;   break;
            case 'L':
                row--;   break;
            case 'U':
                col++;   break;
            case 'D':
                col--;   break;
            default:
                break;
        }
    }
    if(row || col){
        return false;
    }else{
        return true;
    }
    }
};
