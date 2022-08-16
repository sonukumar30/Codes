class Solution {
public:
    void fun(int c,vector<string>&b,vector<int>&lr,vector<int>&ud,vector<int>&ld,vector<vector<string>>&ans,int n){
        
        if(c==n){
            ans.push_back(b);
            return ;
        }
        
        for(int r=0;r<n;r++){
            if(lr[r]==0&&ud[n-1-r+c]==0&&ld[r+c]==0){
                b[r][c]='Q';
                lr[r]=1;
                ud[n-1-r+c]=1;
                ld[r+c]=1;
                fun(c+1,b,lr,ud,ld,ans,n);
                 b[r][c]='.';
                lr[r]=0;
                ud[n-1-r+c]=0;
                ld[r+c]=0;
            }
        }
        
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>b(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            b[i]=s;
        }
        vector<int>lr(n,0),ud(2*n-1,0),ld(2*n-1,0);
        fun(0,b,lr,ud,ld,ans,n);
        return ans;
    }
};