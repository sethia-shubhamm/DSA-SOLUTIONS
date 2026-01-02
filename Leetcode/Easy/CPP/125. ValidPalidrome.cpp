class Solution {
public:
    bool isPalindrome(string s) {
        string tempString;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                tempString += s[i];
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                tempString += s[i] + 32;
            }
            else if (s[i] >= '0' && s[i] <= '9') { 
                tempString += s[i];
            }
        }
        string revString=tempString;
        reverse(revString.begin(), revString.end());
        return tempString==revString;

    }
};