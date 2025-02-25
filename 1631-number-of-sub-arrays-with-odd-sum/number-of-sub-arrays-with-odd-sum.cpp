class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod=1e9+7;
        int odd=0,even=1,sum=0,ans=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2) ans=(ans+even)%mod;
            else ans=(ans+odd)%mod;
            if(sum%2) odd++;
            else even++;
            // cout<<sum<<" ";
        }
        return ans;
    }
};