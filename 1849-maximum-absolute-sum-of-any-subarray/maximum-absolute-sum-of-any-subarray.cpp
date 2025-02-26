class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0,mx=0,mn=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mx) mx=sum;
            if(sum<mn) mn=sum;
        }
        return abs(mx-mn);
    }
};