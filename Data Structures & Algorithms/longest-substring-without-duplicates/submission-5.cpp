class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //init values
        int length=0;
        int sval=s.size();
        int maxLen=0;
         int l=0;
        unordered_set<char> seen;
        //for every character in the set
        //if not seen add to length
        //if seen do not add anything to the length
        //expand the window if a  uniqiue character is found
        //if it is not then i shrink the window
        for(int i=0;i<sval;++i){
            //until a new letter is found, shrink the window
            while(seen.find(s[i])!= seen.end()){
                //erase the LEFT letter
                    seen.erase(s[l]);
                    l++;
            }
            //insert the NEW letter
            seen.insert(s[i]);

            //find the max by comparing the prev max
            maxLen=max(maxLen,i-l+1);

                
        
        }
        return maxLen;
    }
};
