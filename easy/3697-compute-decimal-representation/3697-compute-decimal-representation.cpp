class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int k=0;
        while(n){
            int val=(n%10)*pow(10,k);
        }
    }
            k++;
        reverse(ans.begin(),ans.end());
        return ans;
            n/=10;
            if(val!=0) ans.push_back(val);