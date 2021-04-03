class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0)); //벡터의 이차원 배열 사용
        int cntZero, cntOne;
        
        for (auto &s : strs) {
            cntZero=cntOne=0;
            for (auto c : s){
                if (c=='0') cntZero++;
                else cntOne++;
            }
            
            for (int i=m; i>=cntZero; i--){
                for (int j=n; j>=cntOne; j--){
                    dp[i][j]=max(dp[i][j], dp[i-cntZero][j-cntOne]+1);
                }
            }
        }
        return dp[m][n];
    }
};