            mask |= 1 << (broken[i] - 97);
        
        int count = 0;
        int wordMask = 0;
        for (int i = 0; i <= text.size(); i++) {
            if (i < text.size() && text[i] >= 'a' && text[i] <= 'z')
                wordMask |= mask & (1 << (text[i] - 97));
            if (i == text.size() || text[i] == ' ') {
                if (wordMask == 0) count++;
        for (int i = 0; i < broken.size(); i++)
        int mask = 0;
    int canBeTypedWords(string text, string broken) {
public:
class Solution {