class Solution {
public:
long long solve(string &str,string &s,int &limit){
    if(str.length()<s.length()) return 0;
    long long count=0;
    string trail=str.substr(str.length()-s.length());
    int left=str.length()-s.length();
    for(int i=0;i<left;i++){
        int dig=str[i]-'0';
        if(dig<=limit){
            count+=dig*pow(limit+1,left-i-1);
        }
        else{
            count+=pow(limit+1,left-i);
            return count;
        }
    }
    if(trail>=s) count+=1;
    return count;
}
    long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
        string st=to_string(start-1);
        string e=to_string(finish);
        return solve(e,s,limit)-solve(st,s,limit);
    }
};