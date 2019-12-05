class Solution {
public:
    int balancedStringSplit(string s) {
        stack<char> st;
        int count = 0;
        for (char &c : s) {
            if (st.empty()) {
                st.push(c);
                continue;
            } 
            char curr = st.top();
            if ((curr == 'R' && c == 'L') 
            || (curr == 'L' && c == 'R')) {
                st.pop();
                if (st.empty()) {
                    count++;
                }
                continue;
            } 
            st.push(c);
            continue;
        }
        return count;
    }
};