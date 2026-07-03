/* 给你一个整数数组 nums ，判断是否存在三元组 [nums[i], nums[j], nums[k]] 满足 i != j、i != k 且 j != k ，同时还满足 nums[i] + nums[j] + nums[k] == 0 。请你返回所有和为 0 且不重复的三元组。

注意：答案中不可以包含重复的三元组。

 

 

示例 1：

输入：nums = [-1,0,1,2,-1,-4]
输出：[[-1,-1,2],[-1,0,1]]
解释：
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0 。
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0 。
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0 。
不同的三元组是 [-1,0,1] 和 [-1,-1,2] 。
注意，输出的顺序和三元组的顺序并不重要。
示例 2：

输入：nums = [0,1,1]
输出：[]
解释：唯一可能的三元组和不为 0 。
示例 3：

输入：nums = [0,0,0]
输出：[[0,0,0]]
解释：唯一可能的三元组和为 0 。 */



//排序想到相同元素会挨在一起，可以去重，并且可以用双指针
//题目里说不重复，想到也要去重
//剪枝的本质是提前判断不可能有解，提前去掉




class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0) break;                                                        //剪枝，排序如果第一个数都大于0了，后面更大就不可能和为0了
            int left = i+1;
            int right = nums.size()-1;
            if(i>0 && nums[i] == nums[i-1]) continue;                                  //去重，如果当前数和前一个数相同，说明之前已经处理过这个数了，直接跳过
            while(left<right){
                int num = nums[i] + nums[left] + nums[right];
                if(num == 0){
                    res.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left] == nums[left+1]) left++;             //去重，如果左指针指向的数和下一个数相同，说明之前已经处理过这个数了，直接跳过
                    while(left<right && nums[right] == nums[right-1]) right--;          //去重，如果右指针指向的数和前一个数相同，说明之前已经处理过这个数了，直接跳过
                    left++;
                    right--;
                }
                else if(num<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return res;
    }
};
