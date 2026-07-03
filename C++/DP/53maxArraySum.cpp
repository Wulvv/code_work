/* 给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

子数组是数组中的一个连续部分。 */


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = nums[0];
        int res = nums[0];
        for(int i = 1;i<nums.size();i++){
            cur = max(nums[i],nums[i]+cur);                     //cur用来记录当前最优解
            res = max(cur,res);                                 //res用来记录全局最优解
        }
        return res;
    }
};