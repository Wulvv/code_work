

//冒泡排序的思路，把0冒到后边
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0;i<nums.size()-1;i++){
            for(int j = 0;j<nums.size()-1-i;j++){
                if(nums[j] == 0){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};



//双指针

/* 使用双指针，左指针指向当前已经处理好的序列的尾部，右指针指向待处理序列的头部。

右指针不断向右移动，每次右指针指向非零数，则将左右指针对应的数交换，同时左指针右移。

注意到以下性质：

左指针左边均为非零数；

右指针左边直到左指针处均为零。

因此每次交换，都是将左指针的零与右指针的非零数交换，且非零数的相对顺序并未改变。
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), left = 0, right = 0;
        while (right < n) {
            if (nums[right]) {
                swap(nums[left], nums[right]);
                left++;                                         //left指向非零数，移动到下一个位置
            }
            right++;
        }
    }
};

/* [0, left-1] → 全是非零
[left, right-1] → 全是0
[right, end] → 未处理 */
