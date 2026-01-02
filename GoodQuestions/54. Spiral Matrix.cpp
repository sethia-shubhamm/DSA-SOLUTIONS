class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top=0, left=0, right=matrix[0].size()-1, down=matrix.size()-1;
        while(top <= down && left <= right) {
            for(int i = left; i <= right; i++) ans.push_back(matrix[top][i]);
            top++;
            for(int i = top; i <= down; i++) ans.push_back(matrix[i][right]);
            right--;
            if(top <= down) {
                for(int i = right; i >= left; i--) ans.push_back(matrix[down][i]);
                down--;
            }
            if(left <= right) {
                for(int i = down; i >= top; i--) ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};

// Short Thought Process: To traverse a matrix in spiral order, we maintain four boundaries (top, down, left, right) and iteratively move in four directions (left to right, top to down, right to left, down to top) while updating the boundaries after each complete traversal of a side. We continue this until the boundaries converge.

//Link: https://leetcode.com/problems/spiral-matrix/