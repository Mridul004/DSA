class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> ans,cur,next;
        for(auto i:arr){
            next.clear();
            next.insert(i);
            for(auto j:cur){
                next.insert(j|i);
            }
            cur=next;
            ans.insert(cur.begin(),cur.end());
        }
        return ans.size();
    }
};