class Solution {
public:
    bool isPalindrome(string s) {
        string newS;
        for(char c: s){
            if(isalpha(c) || isdigit(c)) newS += isalpha(c) ? tolower(c) : c;
        }
        int left = 0;
        int right = newS.size() - 1;
        while(left < right){
            if(newS[left] != newS[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
