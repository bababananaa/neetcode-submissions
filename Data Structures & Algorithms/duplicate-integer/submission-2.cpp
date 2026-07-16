#include <iostream>
#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueNums;
        for (auto n: nums){
            uniqueNums.insert(n);
        }
          return (!(uniqueNums.size()==nums.size()));
    }
};