class Solution {
public:

string encode(vector<string>& strs){
    string encoded_string = "";
    for(const string& s : strs){
        encoded_string += to_string(s.length()) + "#" + s;
    }
    return encoded_string;
}
vector<string> decode(string s){
    vector<string> res;
    int i = 0;
    while(i < s.size()){
        string num = "";
        string word = "";
        while(true){
            num += s[i];
            i++;
            if(s[i] == '#'){
                i++;
                break;
            }
        }
        int length = stoi(num);
        while(length > 0){
                word += s[i];
                length--;
                i++;
        }
        res.push_back(word);
    }
    return res;
}
};
