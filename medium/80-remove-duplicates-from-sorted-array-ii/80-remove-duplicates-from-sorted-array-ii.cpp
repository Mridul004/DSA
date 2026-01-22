class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[k]){
                nums[k+2]=nums[i];
            }
        }
    }
                k++;
        return k+2;
        if(nums.size()<3) return nums.size();
};