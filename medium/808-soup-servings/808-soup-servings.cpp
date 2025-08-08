    if(a<=0&&b>0) return 1.0;
}
    double soupServings(int n) {
        if(n>4800) return 1;
        vector<vector<double>> dp(n+1,vector<double> (n+1,-1));
        return recur(n,n,dp);
    }
    if(a<=0&&b<=0) return 0.5;
    if(a==0&&b==0) return 0.5;
    if(a>0&&b<=0) return 0.0;
    if(dp[a][b]!=-1) return dp[a][b];
    double x=0.25*recur(a-100,b,dp);
    double y=0.25*recur(a-75,b-25,dp);
    double z=0.25*recur(a-50,b-50,dp);
    double w=0.25*recur(a-25,b-75,dp);
    return dp[a][b]=x+y+z+w;
};