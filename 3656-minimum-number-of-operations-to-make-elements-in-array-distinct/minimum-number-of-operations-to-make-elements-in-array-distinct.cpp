class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=nums.size()-1;i>=0;i--){
            if(mp[nums[i]]){
                int k=i+1;
                if(k%3) k+=2;
                return k/3;
            }
            mp[nums[i]]++;
        }
        return 0;
    }
};