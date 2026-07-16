class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //stores temp,index
        stack<pair<int,int>> t;
        vector<int> result(temperatures.size());
        pair<int,int> top;
        //for each temperature
        for(int i=0;i<temperatures.size();++i){
            
            //if the top of the stack is less than previous
            while(!t.empty()&&t.top().first<temperatures[i]){
                auto top = t.top();
                t.pop();
                result[top.second]=i-top.second;
            }
            t.push(make_pair(temperatures[i], i));
        }
    
    
        while(!t.empty()){
            result[t.top().second]=0;
            t.pop();
        }
        return result;
            //pushing temp
            
        }
    
};
