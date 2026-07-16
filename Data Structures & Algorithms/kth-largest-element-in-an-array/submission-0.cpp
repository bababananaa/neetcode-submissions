class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //make a min heap
        priority_queue<int,vector<int>,greater<int>> minh;
        for (int n:nums){
            minh.push(n);
        }
        while(minh.size()>k){
            minh.pop();
        }
        return minh.top();
        
    }
};
