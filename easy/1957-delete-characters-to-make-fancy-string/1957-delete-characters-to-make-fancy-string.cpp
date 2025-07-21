class Solution {
public:
    string makeFancyString(string s) {
        string str;
        if(s.length()<3) return s;
        for(int i=0;i<s.length()-2;i++)
        {
            if(s[i]==s[i+1]&&s[i+1]==s[i+2]) continue;
            else str.push_back(s[i]);
        }
        str.push_back(s[s.length()-2]);
        str.push_back(s[s.length()-1]);
        return str;
    }
};