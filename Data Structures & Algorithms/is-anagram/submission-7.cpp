class Solution {
public:
    bool isAnagram(string s, string t) {
        //character count val pair
        unordered_map<char,int> word;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();++i){
            word[s[i]]++;
            word[t[i]]--;
        }
        //racecar - carrace
        for(auto k:word){
            if(k.second!=0){
                return false;
            }
        }
        return true;
    }
};

