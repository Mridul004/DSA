class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,n=nums.size(),sum=0;
        int mn,ans=n+1;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                mn=j-i+1;
                sum-=nums[i];
                i++;
                ans=min(mn,ans);
            }
            j++;
        }
        return ans!=n+1?ans:0;
    }
};