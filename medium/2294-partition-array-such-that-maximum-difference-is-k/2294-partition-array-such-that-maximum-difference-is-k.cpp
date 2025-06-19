class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mn=nums[0],count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-mn>k){
                count++;
                mn=nums[i];
            }
        }
        return count;
    }
};