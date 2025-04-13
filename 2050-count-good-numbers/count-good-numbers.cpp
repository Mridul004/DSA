class Solution {
public:
    int countGoodNumbers(long long n) {
        long long e=(n+1)/2;
        long long o=n/2;
        long long ans=1,mod=1e9+7;
        long long b=5;
        while(e>0){
            if(e%2==0){
                b=(b*b)%mod;
                e/=2;
            }
            else{
                ans=(ans*b)%mod;
                e-=1;
            }
        }
        b=4;
        while(o>0){
            if(o%2==0){
                b=(b*b)%mod;
                o/=2;
            }
            else{
                ans=(ans*b)%mod;
                o-=1;
            }
        }
        return (int)ans;
    }
};