class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while(left<=right){
            int mid = (right - left)/2 + left;    //这里这种写法可以防止溢出
            if(target > nums[mid]){        //这里一定是target > nums[mid]，如果是target >= nums[mid]，当target等于nums[mid]时，right会被更新为mid-1，导致死循环
                //right = mid-1;
                left = mid + 1;
            }else{
                //left = mid+1;
                right = mid - 1;
            }
        }
        return left;
    }
};



//二分查找就得这么写