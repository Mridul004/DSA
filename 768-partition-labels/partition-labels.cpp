class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++) mp[s[i]]=i;
        vector<int> ans;
        int st=0,end=0;
        for(int i=0;i<s.length();i++){
            end=max(end,mp[s[i]]);
            if(i==end){
                ans.push_back(end-st+1);
                st=i+1;
            }
        }
        return ans;
    }
};