class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int> mp;
        set<int> s;
        for(auto i:nums1){
            mp[i[0]]+=i[1];
            s.insert(i[0]);
        }
        for(auto i:nums2){
            mp[i[0]]+=i[1]; 
            s.insert(i[0]); 
        }
        vector<vector<int>> ans;
        for(auto i:s){
            ans.push_back({i,mp[i]});
        }
        return ans;
    }
};