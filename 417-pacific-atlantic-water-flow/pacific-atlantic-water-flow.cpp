class Solution {
public:
    void bfs(int i,int j,vector<vector<int>> &vis,vector<vector<int>> heights){
        int n=heights.size(),m=heights[0].size();
        vis[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        vector<vector<int>> dir={{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(auto k:dir){
                int i1=r+k[0];
                int j1=c+k[1];
                if(i1>=0&&i1<n&&j1>=0&&j1<m&&heights[i1][j1]>=heights[r][c]&&vis[i1][j1]==0){
                    q.push({i1,j1});
                    vis[i1][j1]=1;
                }
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
        vector<vector<int>> visP(n,vector<int>(m,0));
        vector<vector<int>> visA(n,vector<int>(m,0));
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            bfs(i,0,visP,heights);
            bfs(i,m-1,visA,heights);
        }
        for(int i=0;i<m;i++){
            bfs(0,i,visP,heights);
            bfs(n-1,i,visA,heights);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visP[i][j]==1&&visA[i][j]==1) ans.push_back({i,j});
            }
        }
        return ans;
    }
};