class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n;
        unordered_set<int> start;
        int perNum=0;
        int result=0;
        int curr;
        for(int i=0;i<nums.size();++i){
            n.insert(nums[i]);
        }
        for(auto it: n){
            if(n.find(it-1)==n.end()){
                start.insert(it);
            }
        }
        for(auto it:start){
            //find returns iterator]
            //current is the first num in start
            curr=it;
            //fix, counting the starts !
            perNum=1;

            //iterating through the full nums list
            for(auto it: n){
                //finding curr+1
                if(n.find(curr+1)!=n.end()){
                    //if found curr+1
                    perNum++;
                    curr++;
                }
                if (perNum>=result){
                    result=perNum;
                }
            }
        }
        return result ;
    }
    
};
