class Solution {
public:
    vector<int> currPerm;
    vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
       //backtrack 
       backtrack(nums);
       return result;
    }
    void backtrack(vector<int>& nums){
        //if index size>nums size, return tht val
        if(currPerm.size()==nums.size()){
            result.push_back(currPerm);
            return;
        }
        //check the temp for values already used\
        //if it hasnet been used add the value to temp
        //back track to try different options(include)
        //then exclude later
         for(int i=0;i<nums.size();i++){
            bool alreadyUsed=false;
            for(int j=0;j<currPerm.size();++j){
                if (currPerm[j]==nums[i]){
                    alreadyUsed=true;
                    break;
                }
            }
            if (alreadyUsed==false){
                currPerm.push_back(nums[i]);
                backtrack(nums);
                currPerm.pop_back();
            }
        }
        //if index size<nums size continue backtracking
        //currPerm.push_back(nums[i]);
        //inc backtrack and add 1 to index and push back
        //backtrack(index,nums);
        //then pop
        //currPerm.pop_back();
        //exc backtrack add 1 to index
        //backtrack(index+1,nums);
       
    }
};
