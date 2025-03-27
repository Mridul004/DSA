class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> left(n,-1),right(n,-1);
        int mx=nums[0];
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>mp[mx]){
            mx=nums[i];
            }
            if(mp[mx]>(i+1)/2) left[i]=mx;
        }
        unordered_map<int,int> tp;
        mx=nums[n-1];
        for(int i=n-1;i>=0;i--){
            tp[nums[i]]++;
            if(tp[nums[i]]>tp[mx]){
            mx=nums[i];
            }
            if(tp[mx]>(n-i)/2) right[i]=mx;
        }
        for(auto i:left) cout<<i<<" ";
        for(auto i:right) cout<<i<<" ";
        for(int i=0;i<n-1;i++){
            if(left[i]!=-1&&(left[i]==right[i+1])) return i;
        }
        return -1;
    }
};