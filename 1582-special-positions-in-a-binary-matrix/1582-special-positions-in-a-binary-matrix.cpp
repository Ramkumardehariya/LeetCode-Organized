class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<vector<int>> temp;
        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(mat[i][j] == 1){
                    temp.push_back({i, j});
                }
            }
        }
        int count = 0;
        for(int i = 0; i<temp.size(); i++){
            bool flag = true;
            for(int row = 0; row<n; row++){
                if(row != temp[i][0] && mat[row][temp[i][1]] == 1){
                    flag = false;
                    break;
                }
                
            }
            for(int col = 0; col < m; col++){
                if(col != temp[i][1] && mat[temp[i][0]][col] == 1){
                    flag = false;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};