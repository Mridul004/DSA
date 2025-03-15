class Solution {
public:
bool valid(vector<int>& nums,int k,int mid){
    int count=0,i=0;
    while(i<nums.size()){
        if(nums[i]<=mid){
            count++;
            i+=2;
        }
        else i++;
    }
    return count>=k;
}
    int minCapability(vector<int>& nums, int k) {
        int l=*min_element(nums.begin(),nums.end());
        int r=*max_element(nums.begin(),nums.end());
        while(l<r){
            int mid=l+(r-l)/2;
            if(valid(nums,k,mid)) r=mid;
            else l=mid+1;
        }
        return l;
    }
};