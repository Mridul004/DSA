class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int c1=0,c2=0,mx=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1]) c1++;
            else c1=0;
            if(nums[i]>nums[i+1]) c2++;
            else c2=0;
            mx=max({mx,c1,c2});
            // cout<<c1<<c2;
        }
        return mx+1;
    }
};