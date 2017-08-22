class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
    //build the result matrix and set it to zero matrix
    int row = M.size();
    int col = M[0].size();
    vector<vector<int> > R;
    for(int i = 0; i < row; i++){
        vector<int> c(col, 0);
        R.push_back(c);
    }

    //add four -1 paddings to matrix M around
    vector<vector<int> > N;
    vector<int> n(col + 2, -1);
    N.push_back(n);
    for(int i = 0; i < row; i++){
        vector<int> m(col + 2, -1);
        for(int j = 0; j < col; j++){
            m[j + 1] = M[i][j];
        }
        N.push_back(m);
    }
    N.push_back(n);

    //smooth the image
    int sum = 0;
    int avg = 0;
    float divide = 9.0;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            divide = 9.0;
            sum = 0;
            sum += (N[i - 1][j - 1] + N[i - 1][j] + N[i - 1][j + 1] +
                    N[i][j - 1] + N[i][j] + N[i][j + 1] +
                    N[i + 1][j - 1] + N[i + 1][j] + N[i + 1][j + 1]);
            if(N[i - 1][j - 1] == -1){
                divide--;
            }
            if(N[i - 1][j] == -1){
                divide--;
            }
            if(N[i - 1][j + 1] == -1){
                divide--;
            }
            if(N[i][j + 1] == -1){
                divide--;
            }
            if(N[i + 1][j + 1] == -1){
                divide--;
            }
            if(N[i + 1][j] == -1){
                divide--;
            }
            if(N[i + 1][j - 1] == -1){
                divide--;
            }
            if(N[i][j - 1] == -1){
                divide--;
            }
            sum += (9 - divide);
            avg = floor(float(sum) / divide);
            R[i - 1][j - 1] = avg;
        }
    }

    return R;
    }
};
