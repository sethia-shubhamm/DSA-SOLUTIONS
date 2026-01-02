class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j==0) col0=0;
                    else matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int i=0;i<matrix[0].size();i++) matrix[0][i]=0;
        } 
        if(col0==0){
            for(int i=0;i<matrix.size();i++) matrix[i][0]=0;
        }
    }
};

// Short Thought Process: To set matrix zeroes, we use the first row and first column of the matrix as markers to indicate which rows and columns should be set to zero. We also use an additional variable to track if the first column should be zeroed. After marking, we iterate through the matrix again to set the appropriate elements to zero based on the markers. Finally, we handle the first row and first column separately if needed.

//Link: https://leetcode.com/problems/set-matrix-zeroes/