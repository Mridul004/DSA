class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto i:nums){
            if(mp[i]<2){
                ans.push_back(i);
                mp[i]++;
            }
        }
        for(int i=0;i<ans.size();i++) nums[i]=ans[i];
        return ans.size();
    }
};