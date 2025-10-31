class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            if(mp[i]==1) v.push_back(i);
        }
        return v;
    }
            mp[i]++;
        vector<int> v;
};