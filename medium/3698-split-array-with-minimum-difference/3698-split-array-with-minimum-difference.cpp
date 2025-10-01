        while (r > 0 && nums[r - 1] > nums[r]) 
            rsum += nums[r--];
        if (l == r) {
            long long option1 = abs((lsum + nums[l]) - rsum);
            long long option2 = abs(lsum - (rsum + nums[l]));
            return min(option1, option2);
        } 
        else if (r - l == 1 && nums[l] == nums[r]) {
            return abs(lsum - rsum);
        long long lsum = 0, rsum = 0;
        while (l < n - 1 && nums[l] < nums[l + 1]) 
            lsum += nums[l++];
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;
class Solution {
public: