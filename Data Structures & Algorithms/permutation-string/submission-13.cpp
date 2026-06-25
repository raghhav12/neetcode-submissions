class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if (n1 > n2) return false;

        vector<int> target(27,0);
        vector<int> helper(27,0);

        for(int i = 0;i<n1;i++) {
            target[s1[i] - 'a']++;
            helper[s2[i] - 'a']++;
        }

        if(target == helper) return true;

        for(int i = n1; i<n2;i++) {
            char take = s2[i] - 'a';
            char remove = s2[i-n1] - 'a';
            helper[take]++;
            helper[remove]--;
            if(helper == target) return true;
        }

        return false;
    }
};
