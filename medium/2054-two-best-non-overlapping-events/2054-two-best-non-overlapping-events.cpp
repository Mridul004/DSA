        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        int mx=0,ans=0;
        for(auto& i:events)
        {
            int s=i[0],e=i[1],v=i[2];
            while(!pq.empty()&&pq.top().first<s)
            {
                mx=max(mx,pq.top().second);
                pq.pop();
            }
            ans=max(ans,mx+v);
            pq.push({e,v});
        }
        return ans;
    }
        sort(events.begin(),events.end());
    int maxTwoEvents(vector<vector<int>>& events) {
public: