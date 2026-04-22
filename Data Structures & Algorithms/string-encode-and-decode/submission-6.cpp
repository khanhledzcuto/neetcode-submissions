class Solution {

public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string s: strs){
            encoded_string += to_string(s.length()) + "#" + s;
        }
    cout << encoded_string;
    return encoded_string;
};
    vector<string> decode(string s) {
        vector<string> decoded_strings;
        int i = 0;
        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            decoded_strings.push_back(s.substr(i, length));
            i += length;
        }
        return decoded_strings;
    }
};
