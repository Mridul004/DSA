    string robotWithString(string s) {
        stack<char> st;
        string ans="";
        vector<int> v(26);
        for(auto i:s) v[i-'a']++;
        for(auto i:s){
            st.push(i);
        }
            v[i-'a']--;
            while(!st.empty()&&st.top()<=smallest(v)){
                ans+=st.top();
            }
                st.pop();
        while(!st.empty()){
    for(int i=0;i<26;i++) if(v[i]) return 'a'+i;
}
    return 'a';
char smallest(vector<int> &v){
public:
class Solution {