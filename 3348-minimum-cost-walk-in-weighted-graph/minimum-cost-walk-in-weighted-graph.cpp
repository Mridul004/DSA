class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        vector<int> parent(n),mn(n,-1);
        iota(parent.begin(),parent.end(),0);

        function<int(int)> find_root=[&](int node){
            if(parent[node]!=node){
                parent[node]=find_root(parent[node]);
            }
            return parent[node];
        };

        for(auto &i:edges){
            int source=i[0],target=i[1],w=i[2];
            int source_root=find_root(source);
            int target_root=find_root(target);

            mn[target_root]&=w;

            if(source_root!=target_root){
                mn[target_root]&=mn[source_root];
                parent[source_root]=target_root;
            }
        }
        vector<int> ans;
        for(auto &i:query){
            int start=i[0],end=i[1];
            if(start==end) ans.push_back(0);
            else if(find_root(start)!=find_root(end)) ans.push_back(-1);
            else ans.push_back(mn[find_root(start)]);
        }
        return ans;
    }
};