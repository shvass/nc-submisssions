class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string, vector<int>> imap;
        for(int i = 0; i < n; i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            imap[s].push_back(i);
        };

        vector<vector<string>> ret;
        for(pair<string, vector<int>> pr : imap)
        {
            vector<string> group;
            for(int i : pr.second)
            {
                group.push_back(strs[i]);
            };

            ret.push_back(group);
        };

        return ret;
    }
};
