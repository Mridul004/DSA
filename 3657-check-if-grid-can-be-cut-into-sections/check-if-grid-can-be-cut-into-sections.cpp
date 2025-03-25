class Solution {
public:
bool check(vector<vector<int>>& v){
    sort(v.begin(),v.end());
    int sections=0;
    int mx=v[0][1];
    for(auto &i:v){
        int st=i[0],end=i[1];
        if(mx<=st) sections++;
        mx=max(mx,end);
    }
    return sections>=2;
}
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>> x,y;
        for(auto i:rectangles){
            x.push_back({i[0],i[2]});
            y.push_back({i[1],i[3]});
        }
        return check(x)||check(y);
    }
};