class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        for(char c: s){
            if(c == '[' || c == '{' || c == '('){
                bracket.push(c);
            }
            else{
                if(bracket.empty()) return false;
                char top = bracket.top();
                if(c == ']' && top != '[') return false;
                if(c == '}' && top != '{') return false;
                if(c == ')' && top != '(') return false;
                bracket.pop();
            }
        }
        return bracket.empty();
    }
};
