Problem Des: https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> mergeArray;
        int i=0,j=0,k=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                mergeArray.push_back(nums1[i]);
                i++;
            }else{
                mergeArray.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            mergeArray.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            mergeArray.push_back(nums2[j]);
            j++;
        }
        if((mergeArray.size())%2!=0){
            int mid=((mergeArray.size())/2)+1;
            return mergeArray[mid-1];
        }else{
            int even_mid=(mergeArray.size())/2;
            double new_mid=(double)(mergeArray[even_mid-1]+mergeArray[even_mid])/2.0;
            return new_mid;
        }
    }
};
