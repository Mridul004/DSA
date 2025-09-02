        sort(points.begin(), points.end(), cmp);
        int n = points.size(), ans = 0;
        for(int i=0; i<n-1; i++){
            int y=INT_MAX;
            for(int j = i+1; j<n; j++){
                if (points[j][1]>=points[i][1] && y>points[j][1]){
                    ans++;
                    y=points[j][1];
    int numberOfPairs(vector<vector<int>>& points) {
    }
        return (p[0]==q[0])?p[1]<q[1]:p[0]>q[0];
static bool cmp(vector<int>& p, vector<int>& q){
public:
class Solution {