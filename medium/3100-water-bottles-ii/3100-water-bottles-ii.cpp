class Solution {
public:
    int maxBottlesDrunk(int numBottles, int x) {
        int ans=numBottles;
        while(numBottles>=x){
            numBottles-=x-1;
        }
        return ans;
    }
            x++;
            ans++;
};