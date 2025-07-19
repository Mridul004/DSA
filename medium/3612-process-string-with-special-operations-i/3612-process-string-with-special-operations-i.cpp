class Solution {
public:
    string processStr(string s) {
        string str="";
        for(auto i:s){
            if(i=='*'){ if(str.size()>0) str.pop_back(); }
            else if(i=='#') str+=str;
        }
    }
            else if(i=='%') reverse(str.begin(),str.end());
            else str+=i;
        return str;
};