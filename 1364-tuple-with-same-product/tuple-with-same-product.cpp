class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                v.push_back(nums[i]*nums[j]);
                mp[nums[i]*nums[j]]++;
            }
        }
        // for(auto i:v) cout<<i<<" ";
        int count=0;
        for(int i=0;i<v.size();i++) if(mp[v[i]]>1) {  count+=mp[v[i]]*(mp[v[i]]-1)/2;  mp[v[i]]=0; }
        return count*8;
    }
};