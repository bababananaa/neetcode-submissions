class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> anagram;
        if (s.length()!=t.length()) return false;
        //
        for (int i=0;i<s.length();i++){
            anagram[s[i]]++;
        }
        for (int i=0;i<t.length();i++){
            anagram[t[i]]--;
        }
        for (auto& [ch,count]:anagram){
            if (count!=0)return false;
        }
        return true;
    }
};
