class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        for(int i=0; i<=m; i++)
            memset(dp[i], 0, sizeof(short)*(n+1));
        for (auto& s: strs){
            const int len=s.size();
            const int c0=count(s.begin(), s.end(), '0'), c1=len-c0;
            for(int i=m; i>=c0; i--)
                for(int j=n; j>=c1; j--)                    
                    dp[i][j]=max(dp[i][j], 
                            (short)(dp[i-c0][j-c1]+1));
        }
        return dp[m][n];
    }
short dp[101][101];
};