#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int sum;
        for(int i=0;i<nums.size()-1;i++){
           for(int j=i+1;j<nums.size();j++){
               sum=0;
               sum=nums[i]+nums[j];
               if(sum==target){
                   result.push_back(i);
                   result.push_back(j);
                    
                    break;
               }
           } 
        }
        return result;
    }
};
int main(){
    Solution s;
    int target=9;
    vector<int> nums={2,7,11,15};
    vector<int> out;


    out=s.twoSum(nums,target);

    for(int i=0;i<out.size();i++){
        cout<<out[i]<<"  ";
    }
    cout<<endl;
}