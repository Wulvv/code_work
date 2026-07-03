class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;

        while(i<nums.size()){
            while(j<nums.size()){
                if(nums[j] == nums[i]){
                    nums[j] = 111;
                    
                    j++;
                }else{
                    i = j;
                    j++;
                }
            }
            i++;
        }
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != 111){
                count++;
            }else break;
        }
        return count;
    }
};