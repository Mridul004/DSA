class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0,j=0,count1=0,count2=0;
        int n=players.size(),m=trainers.size();
        while(i<n&&j<m){
            if(players[i]<=trainers[j]){
                i++;
                count1++;
            } 
            j++;
        }
        i=n-1,j=m-1;
        while(i>=0&&j>=0){
            if(players[i]<=trainers[j]){
                i--;
                count2++;
            }
            j--;
        }
        return max(count1,count2);
    }
};