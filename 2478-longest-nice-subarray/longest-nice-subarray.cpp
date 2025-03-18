class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int mx=1,n=nums.size();
        int i=0,j=0;
        int mask=0;
        while(j<n){
            while((mask&nums[j])!=0){
                mask^=nums[i];
                i++;
            } 
            mx=max(mx,j-i+1);
            mask=mask|nums[j];
            j++;
        }
        return mx;
    }
};