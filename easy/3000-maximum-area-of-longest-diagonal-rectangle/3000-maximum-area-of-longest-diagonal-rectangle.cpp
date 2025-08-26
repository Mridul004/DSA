class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans=0;
        int mx=0;
        for(auto i:dimensions){
            int k=i[0]*i[0]+i[1]*i[1];
        }
            if(k>mx||(k==mx&&i[0]*i[1]>ans)){
                mx=k;
            }
    }
                ans=i[0]*i[1];
        return ans;