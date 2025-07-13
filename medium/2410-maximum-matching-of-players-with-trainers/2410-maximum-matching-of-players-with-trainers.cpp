        int n=players.size(),m=trainers.size();
        while(i<n&&j<m){
            if(players[i]<=trainers[j]){
        }
            j++;
                i++;
            } 
                count1++;
        i=n-1,j=m-1;
        while(i>=0&&j>=0){
            if(players[i]<=trainers[j]){
                i--;
                count2++;
            }
            j--;
        }
        int i=0,j=0,count1=0,count2=0;
        sort(trainers.begin(),trainers.end());
        sort(players.begin(),players.end());
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
public: