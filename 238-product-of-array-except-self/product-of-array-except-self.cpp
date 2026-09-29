class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int val=1,count=0;
        for(auto i:nums) if(i==0) count++;
        vector<int> v(nums.size(),0);
        if(count>1) return v;
        for(int i=1;i<nums.size();i++) if(nums[i]!=0) val*=nums[i];
        if(count==1){
            if(nums[0]!=0) val*=nums[0];
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0) v[i]=val;
            }
            return v;
        }
        v[0]=val;
        for(int i=1;i<nums.size();i++){
            val/=nums[i];
            val*=nums[i-1];
            v[i]=val;
        }
        return v;
    }
};