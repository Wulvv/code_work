/* 给你一个长度为 n 的整数数组 nums 和 一个目标值 target。请你从 nums 中选出三个在 不同下标位置 的整数，使它们的和与 target 最接近。

返回这三个数的和。

假定每组输入只存在恰好一个解。

 

示例 1：

输入：nums = [-1,2,1,-4], target = 1
输出：2
解释：与 target 最接近的和是 2 (-1 + 2 + 1 = 2)。
示例 2：

输入：nums = [0,0,0], target = 1
输出：0
解释：与 target 最接近的和是 0（0 + 0 + 0 = 0）。 */





/* 思路：三重循环时间复杂度会爆炸，于是可以固定一个数字，另外两个选泽双指针来找，同时res是通过打擂台的方式决定的，所以一开始就要初始化成一个合法的三元组之和，
sum用来存储当前三元组的和，如果当前三元组更接近target，就更新res，如果三元组和小于target，根据从小到大排序，可以left++，反之right--，
如果三元组和等于target，说明已经找到最接近的了，直接返回sum即可。
要注意的点是res的初始化，不需要去重，因为不需要知道是哪三个数
怎么想到要排序呢？排序让相同元素挨在一起，方便去重，同时固定一个，双指针只需一遍遍历 */



class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int res = nums[0] + nums[1] + nums[2]; //初始化成合法三元组
        for(int i = 0;i<nums.size();i++){
            int left = i + 1;
            int right = nums.size()-1;
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                
                if(abs(target-sum)<abs(target-res)){
                    res = sum;
                }
                if(sum<target){
                    left++;
                }else if(sum>target){
                    right--;
                }else{
                    return sum;
                }
            }
        }
        return res;
    }
};