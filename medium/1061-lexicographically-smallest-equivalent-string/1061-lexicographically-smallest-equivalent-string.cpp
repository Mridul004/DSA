public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        int v[26];
        for(int i=0;i<26;i++) v[i]=i;
        auto find=[&](int x){
            while(v[x]!=x){
                v[x]=v[v[x]];
                x=v[x];
            }
            return x;
        };
        for(int i=0;i<s1.size();i++){
            int a=s1[i]-'a',b=s2[i]-'a';
            int d1=find(a),d2=find(b);
            if(d1!=d2) v[max(d1,d2)]=min(d1,d2);
        }
        for(auto &i:baseStr) i=char(find(i-'a')+'a');
        return baseStr;
    }
};