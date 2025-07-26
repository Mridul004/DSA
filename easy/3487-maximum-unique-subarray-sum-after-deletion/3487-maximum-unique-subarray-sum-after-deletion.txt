class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            if(i>0&&mp[i]==0){
                sum+=i;
            }
        }
    }
                mp[i]++;
        return sum;
        int sum=0,count=0;
            if(i<0) count++;
        if(count==nums.size()) return *max_element(nums.begin(),nums.end());
};