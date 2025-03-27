//Problem Des: https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0 , right=nums.size() -1;

        while(left<=right){
            int middle=left + (right - left) / 2;

            if(nums[middle]== target){
                return middle;
            }else if(nums[middle] < target){
                left=middle+1;
            }else{
                right=middle -1;
            }
        }
        return left;
    }
};
