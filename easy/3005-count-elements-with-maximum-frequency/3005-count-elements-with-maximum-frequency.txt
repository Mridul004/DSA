        for(auto i:nums){
            mp[i]++;
        }
            mx=max(mx,mp[i]);
        for(auto i:nums){
            if(mp[i]==mx){
                count+=mx;
            }
                mp[i]=0;
        int count=0;
        }
        return count;
    }
};