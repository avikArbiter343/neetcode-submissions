class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> track = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        int n = s.size();
        for(int i=0; i<n; i++){
            if(track.count(s[i])){
                if(!st.empty() && track[s[i]]==st.top()){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
