class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size()/2;j++){
                swap(matrix[i][j],matrix[i][matrix.size()-j-1]);
            }
        }
    }
};

// Short Thought Process: To rotate the image (matrix) by 90 degrees clockwise, we first transpose the matrix by swapping elements across the main diagonal. After transposition, we reverse each row to achieve the desired rotation.

//Link: https://leetcode.com/problems/rotate-image/