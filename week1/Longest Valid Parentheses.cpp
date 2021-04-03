class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> indexST;
        indexST.push(-1);
        int len = s.length();
        int answer=0;

        for(int i=0;i<len;i++){
            int st_t=indexST.top();
            if (st_t != -1 && s[i]==')' && s[st_t]=='('){
                indexST.pop();
                answer = max(answer,i-indexST.top());
            }
            else indexST.push(i);
           
    }
        return answer;
    }
};