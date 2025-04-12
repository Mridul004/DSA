class Solution {
public:
    long long countGoodIntegers(int n, int k) {
        unordered_set<string> s;
        int d=(n+1)/2;
        int start=pow(10,d-1);
        int end=pow(10,d)-1;
        for(int i=start;i<=end;i++){
            string left=to_string(i);
            string full="";
            if(n%2==0){
                string right=left;
                reverse(right.begin(),right.end());
                full=left+right;
            }
            else{
                string right=left.substr(0,d-1);
                reverse(right.begin(),right.end());
                full=left+right;
            }
            long long num=stoll(full);
            if(num%k!=0) continue;
            sort(full.begin(),full.end());
            s.insert(full);
        }

        vector<long long> factorial(11,1);
        for(int i=1;i<11;i++){
            factorial[i]=factorial[i-1]*i;
        }
        long long result=0;
        for(auto i:s){
            vector<int> count(10,0);
            for(char &ch:i){
                count[ch-'0']++;
            }
            int t=i.length();
            int z=count[0];
            int non=t-z;
            
            long long perm=(non*factorial[t-1]);
            for(int i=0;i<10;i++){
                perm/=factorial[count[i]];
            }
            result+=perm;
        }
        return result;
    }
};