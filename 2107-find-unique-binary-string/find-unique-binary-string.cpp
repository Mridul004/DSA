class Solution {
public:
string dtob(int k){
    string s="";
    if(k==0) return "0";
    while(k){
        s+=k%2+'0';
        k/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int stoi(string s){
    reverse(s.begin(),s.end());
    int ans=0,k=0;
    for(auto i:s){
        if(i=='1') ans+=pow(2,k);
        k++;
    }
    return ans;
}
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[stoi(i)]++;
            cout<<stoi(i)<<"->"<<mp[stoi(i)]<<" ";
        }
        int ans=0;
        for(int i=0;i<=nums.size();i++){
            if(mp[i]==0){
                ans=i;
                break;
            }
        }
        string str=dtob(ans);
        int k=nums.size()-str.size();
        string add="";
        while(k){
            add+='0';
            k--;
        }
        return add+str;
    }
};