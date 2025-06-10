                q.push(i);
            }
            if(dis[i]==0){
        }
        
        vector<int> ans;
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
           
            for(auto x: adj[node]){
                dis[x]--;
                if(dis[x]==0){
                    q.push(x);
                }
            }
        }