class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        int count=0;
        for(auto i:nums) pq.push(i);
        while(pq.size()>1){
            if(pq.top()>=k) break;
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();
            long long t=min(x,y)*2+max(x,y);
            pq.push(t);
            count++;
        }
        return count;
    }
};