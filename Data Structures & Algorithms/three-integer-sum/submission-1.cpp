class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                if (nums[left] + nums[right] + nums[i] == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1])
                        left++;
                } else if (nums[left] + nums[right] + nums[i] < 0)
                    left++;
                else if (nums[left] + nums[right] + nums[i] > 0)
                    right--;
            }
        }
        return result;
    }
};