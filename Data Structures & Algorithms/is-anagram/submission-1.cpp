class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map <char, int> seen;
        for(auto c: s){
            seen[c]++;
        }
        for(auto c: t){
            if(seen[c]){
                seen[c]--;
            }
        }
        for(auto c: s){
            if(seen[c] != 0)
            return false;
        }
        return true;
    }
};
