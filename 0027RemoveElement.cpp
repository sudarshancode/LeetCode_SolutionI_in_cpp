Problem Des: https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newlength=0;

        for(int i=0;i<nums.size();i++){

            if(nums[i] != val){
                nums[newlength]=nums[i];
                newlength++;
            }
        }

        return newlength;
        
    }
};
