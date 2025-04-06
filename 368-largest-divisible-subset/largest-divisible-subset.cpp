class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> dp(n,1);
        vector<int> prev(n,-1);
        int mx=1,last=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        prev[i]=j;
                    }
                    if(dp[i]>mx){
                        mx=dp[i];
                        last=i;
                    }
                }
            }
        }
        vector<int> ans;
        while(last!=-1){
            ans.push_back(nums[last]);
            last=prev[last];
        }
        return ans;
    }
};