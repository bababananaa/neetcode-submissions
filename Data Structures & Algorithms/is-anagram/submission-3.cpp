#include <unordered_map>
using namespace std;
class Solution {
public:
//use char (c, a, t) vs (t, a, c)= check if it exists in both (2)
    bool isAnagram(string s, string t) {
        unordered_map<char,int> letter; 
        if (s.size()!=t.size()){
            return false;
        }
        else{
        for(int i=0;i<s.size();++i){
            letter[s[i]]++; //taking the count of each char
            letter[t[i]]--;
        }
        }
        for(auto c:letter){
            if (c.second!=0){
                return false;
            }
        }
        
        return true;
    
    }
};
