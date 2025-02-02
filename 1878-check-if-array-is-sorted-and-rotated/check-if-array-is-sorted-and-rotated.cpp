class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> v;
        if(nums.size()==1) return 1;
        for(auto i:nums) v.push_back(i);
        for(auto i:nums) v.push_back(i);
        int count=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]<=v[i+1]) count++;
            else count=0;
            if(count==nums.size()-1) return 1;
        }
        return 0;
    }
};