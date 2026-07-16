class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> FreqN;
        for(int i=0;i<nums.size();i++){
            FreqN[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(pair<int,int> enter:FreqN){
            pq.push({enter.second, enter.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        for(int i=0;i<k;++i){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
