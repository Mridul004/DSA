class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,n=nums.size(),sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
        }
                mn=j-i+1;
            }
                ans=min(mn,ans);
        int mn,ans=n+1;
            j++;
                i++;
                sum-=nums[i];
        return ans!=n+1?ans:0;
    }