        for(int i=1;i<nums.size();i++){
        v[0]=val;
        for(int i=1;i<nums.size();i++) if(nums[i]!=0) val*=nums[i];
        if(count>1) return v;
        if(count==1){
            for(int i=0;i<nums.size();i++){
        }
                if(nums[i]==0) v[i]=val;
            }
            return v;
            val/=nums[i];
            val*=nums[i-1];
            v[i]=val;
        vector<int> v(nums.size(),0);
        for(auto i:nums) if(i==0) count++;
        int val=1,count=0;
            if(nums[0]!=0) val*=nums[0];