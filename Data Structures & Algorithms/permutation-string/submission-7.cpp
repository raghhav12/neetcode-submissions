class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        sort(s1.begin(),s1.end());
        if(s1.length() > s2.length()) return false;
        for(int i=0;i<=s2.length() - n1;i++) {
            string temp = s2.substr(i, n1);
            int xor1 = 0;
            sort(temp.begin(),temp.end());
            for(int j = 0;j<n1;j++) {
                xor1+= s1[j] ^ temp[j];
            }
            cout << i << " " << temp << " "<< xor1<< endl;
            if(xor1 == 0) return true;
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
