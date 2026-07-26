class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if(t.size() != n) return false;

        int fmap[26] = {0};

        for(int i = 0; i < n; i++)
        {
            fmap[s[i]-'a']++;
            fmap[t[i]-'a']--;
        };

        for(int i = 0; i < 26; i++)
            if(fmap[i] != 0) return false;

        return true;
        

    }
};
