class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> nm;
        for(int i: nums){
            nm[i]++;
        }

        vector<pair<int, int>> freq;
        for(auto const&[key, count]: nm){
            freq.push_back({count, key});
        }
        int n = freq.size();
        sort(freq.begin(), freq.end());
        vector <int> result;
        for(int i = n - 1; i >= n - k ; --i){
            result.push_back(freq[i].second);
        }
        return result;
    }
};
