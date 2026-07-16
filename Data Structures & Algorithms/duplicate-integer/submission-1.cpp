
class Solution {
public:
//[1,2,3,3]
bool hasDuplicate(vector<int>& nums) {
      unordered_map<int,int> m;
      for(int i=0;i<nums.size();++i){
        m[nums[i]]++;
      } 
      for(auto it:m) {
        if(it.second>=2){
            return true;
        }
      }
      return false;
    }
};