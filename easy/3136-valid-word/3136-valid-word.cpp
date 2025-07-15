        int n = s.length();
        if (n < 3) return false;
        int vowels = 0, consonants = 0;
        string vowelList = "aeiouAEIOU";
        for (char c : s) {
            if (isalpha(c)) {
                if (vowelList.find(c) != string::npos) {
                    vowels++;
                } else {
                    consonants++;
                }
            } else if (!isdigit(c)) {
                return false; 
            }
        }
    bool isValid(string s) {
public:
class Solution {