class Solution {
public:
    int findMin(vector<int> &nums) {
        //init left and right
        //left is probsaly the smallest unless there
        //is no left value
        int l=0;
        int r=nums.size()-1;
        int ans=0;
        while(l<r){
            int middle=l+((r-l)/2);
           //jump size-middle pointer on left
            // if (middle<r&&middle<l){
            //     return middle;
            // }
            if(nums[middle]>nums[r]){
                l=middle+1;
            }
            else{
                r=middle;
            }
            //jump size-middle pointer on right

          
        }
        return nums[l];
    }
};
