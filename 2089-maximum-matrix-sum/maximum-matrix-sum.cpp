class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int count=0,mn=INT_MAX;
        for(auto i:matrix){
            for(auto j:i){
                mn=min(mn,abs(j));
                if(j<0){
                    count++;
                    sum-=j;
                }
                else sum+=j;
            }
        }
        if(count&1) return sum-=2*mn;
        return sum;
    }
};