class Solution {
   
public:
   int lengthOfLongestSubstring(string s) {
    int maxLength = 0;
    
    for (int i = 0; i < s.size(); i++) {
        string sub = "";
        for (int j = i; j < s.size(); j++) {
            if (sub.find(s[j]) != string::npos) {
                break;
            }
            sub += s[j];
        }
        maxLength = max(maxLength, (int)sub.size());
    }
    
    return maxLength;
}
};