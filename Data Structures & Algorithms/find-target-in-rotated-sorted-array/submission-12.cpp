class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0; int r=nums.size()-1;
        //4,5,6,7,0,1,2  TAR 4
        //L   m       r

        //1 3 tar 0

        while(l<=r){
            //0+2-0=2=1
            //r==middle
            int middle=l+((r-l)/2);
            if (nums[middle]==target){return middle;}
            //left is sorted
            if(nums[l] <= nums[middle]){
                //is target in this half
                //0>=0 0<1 new r=1
                if (target >= nums[l] && target < nums[middle]){
                     r=middle-1; //target is in left of left
                }
                //skip
                else {
                    l=middle+1; //target is right of left
                }
            }
            else{
                //right is sorted
                if(nums[r] >= nums[middle]){
                if (target <= nums[r] && target > nums[middle]) {
                     l=middle+1; //target is right of right
                }
                else{
                    r=middle-1;

                }
                }
           
            }
          
            //invalid method

           
        }
        return -1;
    }
};
