            mn.push(mx.top());
        }
            mx.pop();
        if(mn.size()>mx.size()+1){
            mx.push(mn.top());
        }
            mn.pop();
        if(mx.size()>mn.size()+1){
            mn.push(mx.top());
            mx.pop();
        if(!mn.empty()&&!mx.empty()&&mx.top()>mn.top()){
    void addNum(int num) {
    
    }
        
    MedianFinder() {
priority_queue<int,vector<int>,greater<int>> mn;
priority_queue<int> mx;
public:
class MedianFinder {
        mx.push(num);