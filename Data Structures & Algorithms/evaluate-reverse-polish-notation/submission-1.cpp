class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> token;
    for(string s: tokens){
        if(s != "+" && s != "-" && s != "*" && s != "/"){
            token.push(stoi(s));
        }else{
            int a = token.top(); token.pop();
            int b = token.top(); token.pop();
            if(s == "+") token.push(b+a);
            else if(s == "-") token.push(b-a);
            else if(s == "*") token.push(b*a);
            else if(s == "/") token.push(b/a);
        }
    }
    return token.top();
    }
};
