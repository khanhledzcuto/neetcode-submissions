class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map <string, vector<string>> groups;
        for(string s: strs){
            string key(26, 0);
            for(char c: s) key[c - 'a']++;
            groups[key].push_back(s);
        }
        for(auto &pair: groups){
            result.push_back(pair.second);
        }
        return result;
    }
};
