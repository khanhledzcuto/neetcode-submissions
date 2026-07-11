class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res = -1;
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        while(left <= right){
            int middle = (left + right)/2;
            if(nums[middle] == target){
                res = middle;
                break;
            }
            else if(nums[middle] < target) left = middle + 1;
            else if(nums[middle] > target) right = middle - 1;
        }
        return res;
    }
};
