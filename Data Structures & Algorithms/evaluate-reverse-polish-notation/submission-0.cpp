class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> token;
    for(string s: tokens){
        if(s != "+" && s != "-" && s != "*" && s != "/"){
            token.push(stoi(s));
        }else{
            int a = token.top();
            token.pop();
            int b = token.top();
            token.pop();
            int res;
            if(s == "+") res = b + a;
            if(s == "-") res = b - a;
            if(s == "*") res = b * a;
            if(s == "/") res = b / a;
            token.push(res);
        }
    }
    return token.top();
    }
};
