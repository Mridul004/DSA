class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> temp=nums;
        sort(nums.rbegin(),nums.rend());
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++) mp[nums[i]]++;
        // for(auto i:nums) cout<<i<<" ";
        for(auto i:temp){
            if(mp[i]){
                v.push_back(i);
                mp[i]--;
            }
        }
        return v;
    }
};