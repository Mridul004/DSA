        if(n==1)
            return ans;
        for(int i=1;i<n;i++)
        {
            vector<int> v(i+1);
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                    v[j] = 1;
                else
                {
                    int k=ans[i-1][j-1]+ans[i-1][j];
                    v[j] = k;
        ans[0] = vector<int>(1, 1);
        vector<vector<int>> ans(n);
    vector<vector<int>> generate(int n) {
public:
class Solution {