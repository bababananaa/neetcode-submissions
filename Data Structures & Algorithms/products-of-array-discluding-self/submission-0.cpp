class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        //nums.szize(), 0
        vector<int> prefix(n), suffix(n), product(n);
        if (nums.size()==0){return {};}
        //im inititlizing it to this so the first value will just be multipled byone, or if htere is only one vaLUE
        prefix[0]=1;
        for(int i=1;i<prefix.size();++i){
            prefix[i]=nums[i-1]*prefix[i-1];
        }
        //suffix values
        //iterate from size-2 to 0 bc last value is initialized
        //the i value is multiplied by the suffix value(starting at 1 top and decending until)
        suffix[suffix.size()-1]=1;
        for(int i=n-2;i>=0;--i){
            suffix[i]=nums[i+1]*suffix[i+1];
        }

        for(int i=0;i<prefix.size();i++){
            product[i]=(prefix[i]*suffix[i]);
        }
        return product;

    }
};
