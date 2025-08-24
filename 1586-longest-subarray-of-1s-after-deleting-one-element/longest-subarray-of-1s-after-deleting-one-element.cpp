class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int pos=0,flag=0,size=0,mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) size++;
            else{
                if(flag==0){
                    pos=i;
                    size++;
                    flag=1;
                }
                else{
                    i=pos;
                    flag=0;
                    size=0;
                }
            }
            mx=max(mx,size);
        }
        return mx-1;
    }
};