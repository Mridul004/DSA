    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.length(),mx=1;
        unordered_map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
            }
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            mx=max(mx,j-i+1);
            cout<<mx<<" ";
class Solution {
public:
        if(s=="") return 0;