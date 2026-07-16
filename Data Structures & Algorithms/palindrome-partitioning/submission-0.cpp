class Solution {
public:
    vector<string> temp;
    vector<vector<string>> result;
    vector<vector<string>> partition(string s) {
       //implement backtrack helper  
       backtrack(0,s);
       return result;
    }
    //backtracking helper
    void backtrack(int index, string s){
        //base case->what path would we return a value?
        if(index>=s.size()){
            result.push_back(temp);
            return;
        }
        for (int i=index;i<s.size();++i){
           if (validPalindrome(s, index, i)) {
                temp.push_back(s.substr(index,i-index+1));
                backtrack(i+1,s);
                temp.pop_back();
            }
            continue;

        }
    

        
    }
    bool validPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
