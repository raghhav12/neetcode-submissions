class Solution {
public:
    bool isPalindrome(string s) {
        // string newstring = "";

        // for(char c: s) {
        //     if (!isalnum(c)) continue;
        //     newstring += tolower(c);
        // }

        int n = s.length();
        int l = 0, r = n - 1;

        while (l<r) {
            while(l<r && !isalnum(s[l])) l++;
            while(l<r && !isalnum(s[r])) r--;
            if (tolower(s[l]) == tolower(s[r])) {
                l++;
                r--;
            } else {
                return false;
            }
        }
        return true;
    }
};
