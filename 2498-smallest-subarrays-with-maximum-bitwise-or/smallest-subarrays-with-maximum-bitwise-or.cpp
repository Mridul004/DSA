class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int> last(30,0),res(n,1);
        for(int i=n-1;i>=0;i--){
            for(int k=0;k<30;k++){
                if((nums[i]&(1<<k))) last[k]=i;
                res[i]=max(res[i],last[k]-i+1);
            }
        }
        return res;
    } 
}; 