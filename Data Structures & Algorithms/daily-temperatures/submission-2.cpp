class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //stores temp,index
        stack<pair<int,int>> t;
        vector<int> result(temperatures.size());
        pair<int,int> top;
        //for each temperature
        for(int i=0;i<temperatures.size();++i){
            
            //if the top of the stack is less than the incoming val
            //and its not on the first iteration
            while(!t.empty()&&t.top().first<temperatures[i]){
                //initliaze old top ONLY FOR ADDINT TO RESULT
                auto top = t.top();
                //pop dat top
                t.pop();
                //find the index away the next, larger push is
                result[top.second]=i-top.second;
            }
            //push the incoming pair. this should happen every time
            //the only values that are disappearin
            //are [previous values]
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
