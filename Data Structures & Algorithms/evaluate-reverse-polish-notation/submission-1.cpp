class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int a;
        int b;
        stack<int> nums;
        for(int i=0;i<tokens.size();++i){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                a=nums.top();
                nums.pop();
                b=nums.top();
                nums.pop();
                if(tokens[i]=="+")nums.push(b+a);
                if(tokens[i]=="-")nums.push(b-a);
                if(tokens[i]=="*")nums.push(b*a);
                if(tokens[i]=="/")nums.push(b/a);
            
            }
            else{
                nums.push(stoi(tokens[i]));
            }
        }
    
        return nums.top();
    }
};
