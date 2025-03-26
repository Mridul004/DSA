class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int t=m*n;
        int mid=t/2,ans=0;
        for(int i=0;i<t;i++){
            if(abs(v[i]-v[mid])%x!=0) return -1;
            ans+=abs(v[i]-v[mid])/x;
        }
        return ans;
    }
};