class Solution {
public:
    int maximum69Number (int num) {
        int flag=0;
        string s=to_string(num),str="";
        for(auto i:s){
            if(flag==0&&i=='6'){
        }
                str+='9';
            }
    }
                flag=1;
            else str+=i;
        return stoi(str);
};