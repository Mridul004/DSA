class Solution {
public:
bool recur(vector<int> &ans,vector<int> &vis,int n,int k){
    while(k<ans.size()&&ans[k]!=0) k++;
    if(k==ans.size()) return 1;
    for(int i=n;i>=1;i--){
        if(vis[i]) continue;
        if(i==1){
            ans[k]=1;
            vis[1]=1;
            if(recur(ans,vis,n,k+1)) return 1;
            ans[k]=0;
            vis[1]=0;
        }
        else if(k+i<ans.size()&&ans[k+i]==0){
            ans[k]=i;
            ans[k+i]=i;
            vis[i]=1;
            if(recur(ans,vis,n,k+1)) return 1;
            ans[k]=0;
            ans[k+i]=0;
            vis[i]=0;
        }
    }
    return 0;
}
    vector<int> constructDistancedSequence(int n) {
        vector<int> ans(2*n-1,0);
        vector<int> vis(n+1,0);
        recur(ans,vis,n,0);
        return ans;
    }
};