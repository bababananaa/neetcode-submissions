class Solution {
public:
        vector<vector<int>> sol;
        vector<int>temp;
    vector<vector<int>> subsets(vector<int>& nums) {
      backtrack(0,nums);
      return sol;
    
    }
    void backtrack(int index, vector<int>& nums){
        //base case, i is the end of the array.
        //temp is the full set
        if(index>=nums.size()){
            sol.push_back(temp);
            return;
        }
        //include nums[i] in the temp set
            temp.push_back(nums[index]);
            backtrack(index+1,nums); //move on to the next element
            temp.pop_back();//undoing last choice to try other options
            //exclude nums[i]
            backtrack(index+1,nums);//move on to the next step
        }
    
};
