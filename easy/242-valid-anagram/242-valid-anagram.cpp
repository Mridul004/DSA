class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        for(auto i:s) mp1[i]++;
        unordered_map<char,int> mp2;
        for(auto i:t) mp2[i]++;
    }
        for(auto i:t) if(mp1[i]!=mp2[i]) return 0;
        for(auto i:s) if(mp1[i]!=mp2[i]) return 0;
        return 1;
};