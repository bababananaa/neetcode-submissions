#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //i used a map because it will store the index and value
        //and i can use count to find the target value
        //while the time complexity will be o(1)
        unordered_map<int,int> m;
        //traverse nums
        for(int i=0;i<nums.size();++i){
            //as i go i take th target and look for it
            int t=target-nums[i];
            if(m.count(t)){
                return{m[t],i};
            }
            //if noting is found i add a new value to the map
            //current number,indexx
            m[nums[i]]=i;
        }
        return{};
           
        
    
    }
};
