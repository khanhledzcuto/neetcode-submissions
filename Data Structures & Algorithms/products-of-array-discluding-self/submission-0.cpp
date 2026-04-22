class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int j = 0;
        while(j< nums.size()){
            int p = 1;
            for(int i = 0; i < nums.size(); i++){
                if(i == j) continue;
                else p*= nums[i];
            }
            res.push_back(p);
            j++;
        }
        return res;
    }
};
