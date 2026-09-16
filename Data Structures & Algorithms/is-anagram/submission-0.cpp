class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if (n != m) {
            return false;
        }

        unordered_map<char, int> freq_s;
        unordered_map<char, int> freq_t;

        for (int i = 0; i < n; i++) {
            freq_s[s[i]]++;
            freq_t[t[i]]++;
        }

        return freq_s == freq_t;
    }
};