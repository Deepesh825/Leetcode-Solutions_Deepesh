class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        vector<string> truncateS;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                count++;
            }
            if (count > k-1) {
                break;
            }
            truncateS.push_back(string(1, s[i]));
        }
        string ans = "";

        for (string str : truncateS) {
            ans += str;
        }

        return ans;
    }
};