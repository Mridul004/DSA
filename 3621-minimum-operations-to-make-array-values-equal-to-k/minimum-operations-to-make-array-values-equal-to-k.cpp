class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int count=0;
        for(auto i:nums){
            if(i>k) mp[i]++;
            else if(i<k) count++;
        }
        if(mp.size()==0&&count==0) return 0;
        if(count) return -1;
        return mp.size();
    }
};