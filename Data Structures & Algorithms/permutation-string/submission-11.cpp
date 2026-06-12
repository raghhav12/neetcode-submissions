class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length(), n2 = s2.length();
        if(n1 > n2) return false;
        vector<int> s1helper(27,0);
        for(char ch: s1) {
            s1helper[ch-'a']++;
        }

        for(int i = 0;i <= n2-n1;i++) {
            string temp = s2.substr(i,n1);
            vector<int> temphelper(27,0);
            for(auto ch: temp) {
                temphelper[ch-'a']++;
            }

            if(temphelper == s1helper) return true;
        }
        return false;
    }

    // bool checkInclusion(string s1, string s2) {
    //     unordered_map<char,int> m1, m2;
    //     for(char ch: s1) {
    //         m1[ch]++;
    //     }
    //     for(char ch: s2) {
    //         m2[ch]++;
    //     }
    //     for(auto it1 = m1.begin(); it1 != m1.end();it1++) {
    //         pair<char,int> p1 = *it1;
    //         for(auto it2 = m2.begin(); it2 != m2.end();it2++) {
    //             pair<char,int> p2 = *it2;
    //             if(p1.first == p2.first) {
    //                 if(p1.second != p2.second) return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
};
