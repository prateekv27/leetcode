class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();

        int col = matrix[0].size();
        vector<vector<int>>ans(rows , vector<int>(col));
        for (int i=0;i<rows;i++ ){
            for(int j = 0;j<col;j++){
                ans[j][rows-1-i]=matrix[i][j];
            }
        }
        matrix = ans;
        

        
    }
};