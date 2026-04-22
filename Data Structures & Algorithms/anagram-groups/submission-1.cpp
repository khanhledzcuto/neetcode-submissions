class Solution {
private:
    string getSignature(string s){
        int count[26] = {0};
        string key = "";
        for(char c: s){
            count[c - 'a']++;
        }
        for(int i = 0; i < 26; ++i){
            key += to_string(count[i]) + "#";
        }
        return key;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map <string, vector<string>> groups;
        for(string s: strs){
            string signature = getSignature(s);
            groups[signature].push_back(s);
        }
        for(auto &pair: groups){
            result.push_back(pair.second);
        }
        return result;
    }
};
