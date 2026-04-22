class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq_map;
        for(int i: nums){
            freq_map[i]++;
        }
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        for(auto const&[val, count]: freq_map){
            bucket[count].push_back(val);
        }
        vector<int> result;
        for(int i = n; i >= 0; --i){
            for(auto nums: bucket[i]){
                result.push_back(nums);
                if(result.size() == k){
                    return result;
                }
            }
        }  
        return result;
    }
};
