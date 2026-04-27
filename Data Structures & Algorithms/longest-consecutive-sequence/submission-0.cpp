class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int longest = 0;
        for(int num: num_set){
            if(num_set.find(num - 1) == num_set.end()){
                int currLen = 1;
                while(num_set.find(num + currLen) != num_set.end()){
                    currLen++;
                }
                if (currLen > longest) longest = currLen;
            }
        }
        return longest;
    }
};
