class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m1) {
        
        int m=m1.size();
        int n=m1[0].size();
        
        
        vector<vector<int>>m2(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  m2[i][j]=m1[j][i];
            }
        }
        
        return m2;
        
    }
};