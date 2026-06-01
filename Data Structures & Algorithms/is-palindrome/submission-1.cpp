class Solution {
public:
    bool isPalindrome(string s) {
        string newstring = "";

        for(char c: s) {
            if (c == ' ' || !isalnum(c)) continue;
            newstring += tolower(c);
        }

        int n = newstring.length();
        int l = 0, r = n - 1;

        cout << newstring << endl;

        while (l<=r) {
            if (newstring[l] == newstring[r]) {
                l++;
                r--;
            } else {
                return false;
            }
        }
        return true;
    }
};
