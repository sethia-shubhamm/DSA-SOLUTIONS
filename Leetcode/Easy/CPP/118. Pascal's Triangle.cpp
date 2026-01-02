class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> row_ans;
        int numCol=0;
        for(int i=0;i<numRows;i++){
            numCol++;
            for(int j=0;j<numCol;j++){
                if(j==0 || j==numCol-1) row_ans.push_back(1);
                else{
                    row_ans.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
            ans.push_back(row_ans);
            row_ans.clear();
        }
        return ans;
    }
};

// Short Thought Process: To generate Pascal's Triangle, we iterate through each row and column. The first and last elements of each row are always 1. For other elements, we calculate their values by summing the two elements directly above them from the previous row. We store each row in a temporary vector and add it to the final result after completing the row.

//Link: https://leetcode.com/problems/pascals-triangle/