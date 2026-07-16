#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution {
public:
//[1,2,3,3]

    bool hasDuplicate(vector<int>& nums) {
        //init an unordered map, later used to count frequency
        unordered_map<int, int> umap;
    
        //in the unordered map add the freqency of each number
        //1. use for loop to iterate through the whole vector
        //2. if nums[i] exists, then map new element with nums[i] as the key
        for (int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        //1. iterate through the umap of freq
        //if one frequency is greater or equal to 2. return true, else return false
        for (auto it : umap){
            if(it.second>=2){
                return true;
            }
        }
        return false;
        
    }

};