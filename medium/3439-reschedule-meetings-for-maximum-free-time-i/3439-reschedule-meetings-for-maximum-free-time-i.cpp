    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int> v;
        int n=startTime.size();
        for(int i=1;i<n;i++){
            v.push_back(startTime[i]-endTime[i-1]);
        }
        v.push_back(startTime[0]-0);
        v.push_back(eventTime-endTime[n-1]);
        int i=0,j=0,sum=0,mx=0;
        while(j<v.size()){
            if(j-i+1>k+1){
        }
                sum-=v[i];
            }
            sum+=v[j];
            mx=max(mx,sum);
            j++;
        return mx;
                i++;
    }