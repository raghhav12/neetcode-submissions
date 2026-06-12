class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();

        if(n1 > n2) return false;

        vector<int> s1helper(27,0);
        vector<int> s2helper(27,0);

        for(char c: s1) {
            s1helper[c-'a']++;
        }

        for(int i=0;i<n1;i++) {
            s2helper[s2[i]-'a']++;
        }

        if(s1helper == s2helper) return true;

        for(int i = n1;i<n2;i++) {
            s2helper[s2[i]-'a']++;
            s2helper[s2[i-n1]-'a']--;
            if(s1helper == s2helper) return true;
        }

        return false;
    }
};
