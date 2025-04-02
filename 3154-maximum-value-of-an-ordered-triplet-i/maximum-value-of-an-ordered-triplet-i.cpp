class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long mx=nums[0],diff=mx-nums[1];
        long long ans=max(0LL,diff*nums[2]);
        for(int i=3;i<n;i++){
            mx=max(mx,(long long)nums[i-2]);
            diff=max(diff,mx-nums[i-1]);
            ans=max(ans,diff*nums[i]);
        }
        return ans;
    }
};