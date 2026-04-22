class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>gA;
        for(string orgS: strs){
            string sortedS = orgS;
            sort(sortedS.begin(), sortedS.end());
            gA[sortedS].push_back(orgS);
        }
        vector<vector<string>>rsl;
        for(auto& pair: gA){
            rsl.push_back(pair.second);
        }
        return rsl;
    }
};
