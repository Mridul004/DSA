class NumberContainers {
public:
map<int,int> mp;
map<int,set<int>> mp2;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(mp.find(index)!=mp.end()&&mp[index]!=number){
            mp2[mp[index]].erase(index);
            if(mp2[mp[index]].empty()) mp2.erase(mp[index]);
        }
        mp[index]=number;
        mp2[number].insert(index);
    }
    
    int find(int number) {
        return mp2[number].empty()?-1:*mp2[number].begin(); 
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */