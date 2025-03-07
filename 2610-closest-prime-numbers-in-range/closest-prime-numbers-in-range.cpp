class Solution {
public:
bool isPrime(int n){
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
    vector<int> closestPrimes(int left, int right) {
        int mn=INT_MAX;
        vector<int> ans(2);
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(isPrime(i)) v.push_back(i);
        }
        for(auto i:v) cout<<i<<" ";
        if(v.size()<2) return {-1,-1};
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]-v[i]<mn){
                ans[0]=v[i],ans[1]=v[i+1];
                mn=v[i+1]-v[i];
            }
        }
        return ans;
    }
};