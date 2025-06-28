    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> temp=nums;
        vector<int> v;
        for(int i=0;i<k;i++) mp[nums[i]]++;
        for(auto i:temp){
        return v;
            if(mp[i]){
        }
                v.push_back(i);
            }
    }
                mp[i]--;
        unordered_map<int,int> mp;
        // for(auto i:nums) cout<<i<<" ";
class Solution {
public:
        sort(nums.rbegin(),nums.rend());
};