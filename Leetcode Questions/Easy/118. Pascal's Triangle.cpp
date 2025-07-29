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