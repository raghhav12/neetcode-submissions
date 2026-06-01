class Solution {
public:
    bool isPalindrome(string s) {
        // string newstring = "";

        // for(char c: s) {
        //     if (!isalnum(c)) continue;
        //     newstring += tolower(c);
        // }

        int n = s.length();
        int l = 0, r =  n - 1;

        while (l<r) {
            while(!isalnum(s[l])) l++;
            while(!isalnum(s[r])) r--;
            if (l<r && tolower(s[l]) != tolower(s[r])) {
                return false;
                
            }

            l++;
            r--;
        }
        return true;
    }
};
