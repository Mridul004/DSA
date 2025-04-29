class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long i=0,j=0,n=nums.size(),count=0,mx_count=0;
        while(j<n){
           if(nums[j]==mx) mx_count++;
        }
            while(mx_count>=k){
            j++;
        long long mx=*max_element(nums.begin(),nums.end());
        return count;
                if(nums[i]==mx) mx_count--;
            }
    }
                i++;
            count+=i;
};