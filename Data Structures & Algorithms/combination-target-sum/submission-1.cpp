class Solution {
public:
    vector<vector<int>>result;
    vector<int> currSum;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        backtrack(0,nums,target);
        return result;
    }
    void backtrack(int index, vector<int>& nums, int target){
        //ask yourself: what paths will cause me to
        //try a different path?
        //target is gone= found sum
        //target is negative= went over sum
        //index is greater than the size of nums= run out of nums
        if(target==0){
            result.push_back(currSum);
            return;
        }

        if(target<0){
            return;
        }

        if(index>=nums.size()){
            return;
        }
        // then, figure out what is being included/excluded
        //using recursion so move operations to within the parameter
        currSum.push_back(nums[index]);
        // Stay at the SAME index (index) to allow re-using this number
        backtrack(index, nums, target-nums[index]);
        currSum.pop_back();
        //exclude, leave target alone move to next index
        backtrack(index+1, nums, target);
    
    }


};
