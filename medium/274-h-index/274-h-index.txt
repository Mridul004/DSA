class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        for(int i=0;i<n;i++){
            if(n-i<=citations[i]) return n-i;
        }
    }
        return 0;
        if(n==1&&citations[0]>0) return 1;
};