class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> result;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            int LP = 1;
            int RP = 1;
            if(i == 0){
                int j = 1;
                while(j < n){
                    RP *= nums[j];
                    j++;
                }
                result.push_back(LP*RP);
                continue;
            }
            if(i == n - 1){
                int j = 0;
                while(j < n - 1){
                    LP *= nums[j];
                    j++;
                }
                result.push_back(LP*RP);
                continue;
            }
            int k = i - 1;
            while(k >= 0){
                LP *= nums[k];
                k--;
            }
            int l = i + 1;
            while(l < n){
                RP *= nums[l];
                l++;
            };
            result.push_back(LP * RP);
        }
    return result;
    }
};
