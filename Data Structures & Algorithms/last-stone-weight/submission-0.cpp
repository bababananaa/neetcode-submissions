class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        for(auto s:stones){
            maxheap.push(s);
        }
        while(maxheap.size()>1){
            int s1=maxheap.top();
            maxheap.pop();
            int s2=maxheap.top();
            maxheap.pop();
            if(s1==s2){
                maxheap.push(0);
            }
            else{
                maxheap.push(s1-s2);
            }  
        }
        return maxheap.top();
    }
};
